/*
    This file is part of KCachegrind.

    SPDX-FileCopyrightText: 2003-2016 Josef Weidendorfer <Josef.Weidendorfer@gmx.de>

    SPDX-License-Identifier: GPL-2.0-only
*/

/*
 * QCachegrind startup
 */

#include <QDir>
#include <QApplication>

#include "qcgconfig.h"
#include "config.h"
#include "globalguiconfig.h"
#include "qcgtoplevel.h"
#include "tracedata.h"
#include "loader.h"

int main( int argc, char ** argv )
{
#ifdef Q_OS_MAC
    // Menu icons don't look right on macOS.
    QApplication::setAttribute(Qt::AA_DontShowIconsInMenus);
#endif

    QApplication app(argc, argv);
    Loader::initLoaders();

    QCoreApplication::setOrganizationName(QStringLiteral("kde.org"));
    QCoreApplication::setApplicationName(QStringLiteral("QCachegrind"));
    ConfigStorage::setStorage(new QCGConfigStorage);
    // creates global config object of type GlobalGUIConfig
    //GlobalGUIConfig::config()->addDefaultTypes();

    QStringList list = app.arguments();
    list.pop_front();
    QCGTopLevel* t = new QCGTopLevel();
    t->show();
    if (list.isEmpty()) {
        // load files in current dir
        // @TODO: add General config setting to set default dir with profile files:
        t->loadDelayed( QStringLiteral("/usr/local/homebrew/var/www/profiler_data"), false);
    }
    else {
        foreach(const QString& file, list)
            t->loadDelayed( QDir::fromNativeSeparators(file) );
    }

    int res = app.exec();

    // to make leak checking in valgrind happy...
    Loader::deleteLoaders();
    ProfileContext::cleanup();
    ConfigStorage::cleanup();

    return res;
}

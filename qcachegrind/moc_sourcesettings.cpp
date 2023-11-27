/****************************************************************************
** Meta object code from reading C++ file 'sourcesettings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sourcesettings.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sourcesettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSourceSettingsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSourceSettingsENDCLASS = QtMocHelpers::stringData(
    "SourceSettings",
    "addClicked",
    "",
    "deleteClicked",
    "browseClicked",
    "dirListItemChanged",
    "QTreeWidgetItem*",
    "objectChanged",
    "dirEditChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSourceSettingsENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[15];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[14];
    char stringdata5[19];
    char stringdata6[17];
    char stringdata7[14];
    char stringdata8[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSourceSettingsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSourceSettingsENDCLASS_t qt_meta_stringdata_CLASSSourceSettingsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "SourceSettings"
        QT_MOC_LITERAL(15, 10),  // "addClicked"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 13),  // "deleteClicked"
        QT_MOC_LITERAL(41, 13),  // "browseClicked"
        QT_MOC_LITERAL(55, 18),  // "dirListItemChanged"
        QT_MOC_LITERAL(74, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(91, 13),  // "objectChanged"
        QT_MOC_LITERAL(105, 14)   // "dirEditChanged"
    },
    "SourceSettings",
    "addClicked",
    "",
    "deleteClicked",
    "browseClicked",
    "dirListItemChanged",
    "QTreeWidgetItem*",
    "objectChanged",
    "dirEditChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSourceSettingsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    1 /* Public */,
       3,    0,   51,    2, 0x0a,    2 /* Public */,
       4,    0,   52,    2, 0x0a,    3 /* Public */,
       5,    2,   53,    2, 0x0a,    4 /* Public */,
       7,    1,   58,    2, 0x0a,    7 /* Public */,
       8,    1,   61,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject SourceSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<ConfigPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSSourceSettingsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSourceSettingsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSourceSettingsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SourceSettings, std::true_type>,
        // method 'addClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'browseClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dirListItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'objectChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'dirEditChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void SourceSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SourceSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addClicked(); break;
        case 1: _t->deleteClicked(); break;
        case 2: _t->browseClicked(); break;
        case 3: _t->dirListItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 4: _t->objectChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->dirEditChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SourceSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSourceSettingsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ConfigPage::qt_metacast(_clname);
}

int SourceSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP

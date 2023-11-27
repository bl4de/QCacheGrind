/********************************************************************************
** Form generated from reading UI file 'colorsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORSETTINGS_H
#define UI_COLORSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "qtcolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_ColorSettings
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *colorList;
    QLabel *label_2;
    QtColorButton *colorButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetButton;

    void setupUi(QWidget *ColorSettings)
    {
        if (ColorSettings->objectName().isEmpty())
            ColorSettings->setObjectName("ColorSettings");
        ColorSettings->resize(400, 300);
        gridLayout = new QGridLayout(ColorSettings);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, 0, 0);
        colorList = new QTreeWidget(ColorSettings);
        colorList->setObjectName("colorList");

        gridLayout->addWidget(colorList, 0, 0, 1, 4);

        label_2 = new QLabel(ColorSettings);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        colorButton = new QtColorButton(ColorSettings);
        colorButton->setObjectName("colorButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorButton->sizePolicy().hasHeightForWidth());
        colorButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(colorButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        resetButton = new QPushButton(ColorSettings);
        resetButton->setObjectName("resetButton");

        gridLayout->addWidget(resetButton, 1, 3, 1, 1);


        retranslateUi(ColorSettings);

        QMetaObject::connectSlotsByName(ColorSettings);
    } // setupUi

    void retranslateUi(QWidget *ColorSettings)
    {
        QTreeWidgetItem *___qtreewidgetitem = colorList->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("ColorSettings", "Name", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("ColorSettings", "Color", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ColorSettings", "Type", nullptr));
        label_2->setText(QCoreApplication::translate("ColorSettings", "Color:", nullptr));
        colorButton->setText(QString());
        resetButton->setText(QCoreApplication::translate("ColorSettings", "Reset", nullptr));
        (void)ColorSettings;
    } // retranslateUi

};

namespace Ui {
    class ColorSettings: public Ui_ColorSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORSETTINGS_H

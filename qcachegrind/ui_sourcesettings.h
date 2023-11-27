/********************************************************************************
** Form generated from reading UI file 'sourcesettings.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOURCESETTINGS_H
#define UI_SOURCESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SourceSettings
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *dirList;
    QVBoxLayout *_2;
    QPushButton *addDirButton;
    QPushButton *deleteDirButton;
    QSpacerItem *Spacer5;
    QLabel *label;
    QComboBox *objectBox;
    QLabel *label_2;
    QLineEdit *dirEdit;
    QPushButton *browseDirButton;

    void setupUi(QWidget *SourceSettings)
    {
        if (SourceSettings->objectName().isEmpty())
            SourceSettings->setObjectName("SourceSettings");
        SourceSettings->resize(400, 300);
        gridLayout = new QGridLayout(SourceSettings);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 0, 0, 0);
        dirList = new QTreeWidget(SourceSettings);
        dirList->setObjectName("dirList");

        gridLayout->addWidget(dirList, 0, 0, 1, 2);

        _2 = new QVBoxLayout();
        _2->setObjectName("_2");
        addDirButton = new QPushButton(SourceSettings);
        addDirButton->setObjectName("addDirButton");

        _2->addWidget(addDirButton);

        deleteDirButton = new QPushButton(SourceSettings);
        deleteDirButton->setObjectName("deleteDirButton");

        _2->addWidget(deleteDirButton);

        Spacer5 = new QSpacerItem(16, 49, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _2->addItem(Spacer5);


        gridLayout->addLayout(_2, 0, 2, 1, 1);

        label = new QLabel(SourceSettings);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        objectBox = new QComboBox(SourceSettings);
        objectBox->setObjectName("objectBox");

        gridLayout->addWidget(objectBox, 1, 1, 1, 2);

        label_2 = new QLabel(SourceSettings);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        dirEdit = new QLineEdit(SourceSettings);
        dirEdit->setObjectName("dirEdit");

        gridLayout->addWidget(dirEdit, 2, 1, 1, 1);

        browseDirButton = new QPushButton(SourceSettings);
        browseDirButton->setObjectName("browseDirButton");

        gridLayout->addWidget(browseDirButton, 2, 2, 1, 1);


        retranslateUi(SourceSettings);

        QMetaObject::connectSlotsByName(SourceSettings);
    } // setupUi

    void retranslateUi(QWidget *SourceSettings)
    {
        QTreeWidgetItem *___qtreewidgetitem = dirList->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("SourceSettings", "Base Directory", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("SourceSettings", "ELF Object", nullptr));
        addDirButton->setText(QCoreApplication::translate("SourceSettings", "Add", nullptr));
        deleteDirButton->setText(QCoreApplication::translate("SourceSettings", "Delete", nullptr));
        label->setText(QCoreApplication::translate("SourceSettings", "ELF Object:", nullptr));
        label_2->setText(QCoreApplication::translate("SourceSettings", "Base Directory:", nullptr));
        browseDirButton->setText(QCoreApplication::translate("SourceSettings", "Browse...", nullptr));
        (void)SourceSettings;
    } // retranslateUi

};

namespace Ui {
    class SourceSettings: public Ui_SourceSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCESETTINGS_H

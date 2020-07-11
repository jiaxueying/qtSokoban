/********************************************************************************
** Form generated from reading UI file 'stagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGEDIALOG_H
#define UI_STAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_stageDialog
{
public:

    void setupUi(QDialog *stageDialog)
    {
        if (stageDialog->objectName().isEmpty())
            stageDialog->setObjectName(QString::fromUtf8("stageDialog"));
        stageDialog->resize(400, 300);

        retranslateUi(stageDialog);

        QMetaObject::connectSlotsByName(stageDialog);
    } // setupUi

    void retranslateUi(QDialog *stageDialog)
    {
        stageDialog->setWindowTitle(QCoreApplication::translate("stageDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stageDialog: public Ui_stageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGEDIALOG_H

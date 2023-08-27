/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerdialog
{
public:
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditUserName;
    QLabel *labelPwd;
    QLabel *labelUserName;
    QLabel *labelConfirmPwd;
    QLineEdit *lineEditConfirmPwd;
    QLineEdit *lineEditPwd;
    QCheckBox *checkBoxShowPwd;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonReg;
    QPushButton *pushButtonLogin;

    void setupUi(QWidget *registerdialog)
    {
        if (registerdialog->objectName().isEmpty())
            registerdialog->setObjectName(QString::fromUtf8("registerdialog"));
        registerdialog->resize(600, 600);
        formLayoutWidget = new QWidget(registerdialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 60, 571, 261));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditUserName = new QLineEdit(formLayoutWidget);
        lineEditUserName->setObjectName(QString::fromUtf8("lineEditUserName"));

        gridLayout->addWidget(lineEditUserName, 0, 1, 1, 1);

        labelPwd = new QLabel(formLayoutWidget);
        labelPwd->setObjectName(QString::fromUtf8("labelPwd"));

        gridLayout->addWidget(labelPwd, 1, 0, 1, 1);

        labelUserName = new QLabel(formLayoutWidget);
        labelUserName->setObjectName(QString::fromUtf8("labelUserName"));

        gridLayout->addWidget(labelUserName, 0, 0, 1, 1);

        labelConfirmPwd = new QLabel(formLayoutWidget);
        labelConfirmPwd->setObjectName(QString::fromUtf8("labelConfirmPwd"));

        gridLayout->addWidget(labelConfirmPwd, 2, 0, 1, 1);

        lineEditConfirmPwd = new QLineEdit(formLayoutWidget);
        lineEditConfirmPwd->setObjectName(QString::fromUtf8("lineEditConfirmPwd"));
        lineEditConfirmPwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditConfirmPwd, 2, 1, 1, 1);

        lineEditPwd = new QLineEdit(formLayoutWidget);
        lineEditPwd->setObjectName(QString::fromUtf8("lineEditPwd"));
        lineEditPwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPwd, 1, 1, 1, 1);

        checkBoxShowPwd = new QCheckBox(registerdialog);
        checkBoxShowPwd->setObjectName(QString::fromUtf8("checkBoxShowPwd"));
        checkBoxShowPwd->setGeometry(QRect(410, 370, 161, 23));
        horizontalLayoutWidget = new QWidget(registerdialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 420, 401, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonReg = new QPushButton(horizontalLayoutWidget);
        pushButtonReg->setObjectName(QString::fromUtf8("pushButtonReg"));

        horizontalLayout->addWidget(pushButtonReg);

        pushButtonLogin = new QPushButton(horizontalLayoutWidget);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));

        horizontalLayout->addWidget(pushButtonLogin);


        retranslateUi(registerdialog);

        QMetaObject::connectSlotsByName(registerdialog);
    } // setupUi

    void retranslateUi(QWidget *registerdialog)
    {
        registerdialog->setWindowTitle(QApplication::translate("registerdialog", "Form", nullptr));
        labelPwd->setText(QApplication::translate("registerdialog", "password", nullptr));
        labelUserName->setText(QApplication::translate("registerdialog", "user_name", nullptr));
        labelConfirmPwd->setText(QApplication::translate("registerdialog", "confirm password", nullptr));
        checkBoxShowPwd->setText(QApplication::translate("registerdialog", "show password", nullptr));
        pushButtonReg->setText(QApplication::translate("registerdialog", "register", nullptr));
        pushButtonLogin->setText(QApplication::translate("registerdialog", "login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerdialog: public Ui_registerdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H

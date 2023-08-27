/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_login
{
public:
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelUserName;
    QLineEdit *lineEditUserName;
    QLabel *labelPwd;
    QLineEdit *lineEditPwd;
    QCheckBox *checkBoxShowPwd;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonReg;
    QPushButton *pushButtonLogin;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(600, 600);
        formLayoutWidget = new QWidget(login);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 100, 571, 261));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelUserName = new QLabel(formLayoutWidget);
        labelUserName->setObjectName(QString::fromUtf8("labelUserName"));

        gridLayout->addWidget(labelUserName, 0, 0, 1, 1);

        lineEditUserName = new QLineEdit(formLayoutWidget);
        lineEditUserName->setObjectName(QString::fromUtf8("lineEditUserName"));

        gridLayout->addWidget(lineEditUserName, 0, 1, 1, 1);

        labelPwd = new QLabel(formLayoutWidget);
        labelPwd->setObjectName(QString::fromUtf8("labelPwd"));

        gridLayout->addWidget(labelPwd, 1, 0, 1, 1);

        lineEditPwd = new QLineEdit(formLayoutWidget);
        lineEditPwd->setObjectName(QString::fromUtf8("lineEditPwd"));
        lineEditPwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPwd, 1, 1, 1, 1);

        checkBoxShowPwd = new QCheckBox(login);
        checkBoxShowPwd->setObjectName(QString::fromUtf8("checkBoxShowPwd"));
        checkBoxShowPwd->setGeometry(QRect(410, 410, 161, 23));
        horizontalLayoutWidget = new QWidget(login);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 460, 401, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonReg = new QPushButton(horizontalLayoutWidget);
        pushButtonReg->setObjectName(QString::fromUtf8("pushButtonReg"));

        horizontalLayout->addWidget(pushButtonReg);

        pushButtonLogin = new QPushButton(horizontalLayoutWidget);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));

        horizontalLayout->addWidget(pushButtonLogin);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", nullptr));
        labelUserName->setText(QApplication::translate("login", "user_name", nullptr));
        labelPwd->setText(QApplication::translate("login", "password", nullptr));
        checkBoxShowPwd->setText(QApplication::translate("login", "show password", nullptr));
        pushButtonReg->setText(QApplication::translate("login", "register", nullptr));
        pushButtonLogin->setText(QApplication::translate("login", "login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

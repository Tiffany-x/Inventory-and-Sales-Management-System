/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *password_txt;
    QLineEdit *empID;
    QPushButton *Login_cmd;
    QLabel *label;
    QLabel *errorMSG;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(500, 400);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(90, 121, 326, 171));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(10, 10, 10, 10);
        password_txt = new QLineEdit(formLayoutWidget);
        password_txt->setObjectName("password_txt");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(password_txt->sizePolicy().hasHeightForWidth());
        password_txt->setSizePolicy(sizePolicy);
        password_txt->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password_txt, 1, 1, 1, 1);

        empID = new QLineEdit(formLayoutWidget);
        empID->setObjectName("empID");
        empID->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(empID->sizePolicy().hasHeightForWidth());
        empID->setSizePolicy(sizePolicy1);
        empID->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(empID, 0, 1, 1, 1);

        Login_cmd = new QPushButton(formLayoutWidget);
        Login_cmd->setObjectName("Login_cmd");
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Login_cmd->sizePolicy().hasHeightForWidth());
        Login_cmd->setSizePolicy(sizePolicy2);
        Login_cmd->setMinimumSize(QSize(150, 30));
        Login_cmd->setMaximumSize(QSize(150, 30));
        QFont font;
        font.setPointSize(14);
        Login_cmd->setFont(font);
        Login_cmd->setCursor(QCursor(Qt::PointingHandCursor));
        Login_cmd->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(Login_cmd, 3, 0, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        label->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        errorMSG = new QLabel(formLayoutWidget);
        errorMSG->setObjectName("errorMSG");
        errorMSG->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(errorMSG, 2, 0, 1, 2);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 500, 21));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        empID->setInputMask(QString());
        Login_cmd->setText(QCoreApplication::translate("Login", "Log in", nullptr));
        label->setText(QCoreApplication::translate("Login", "Employee ID: ", nullptr));
        errorMSG->setText(QString());
        label_2->setText(QCoreApplication::translate("Login", "Password: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

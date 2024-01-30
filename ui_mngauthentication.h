/********************************************************************************
** Form generated from reading UI file 'mngauthentication.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGAUTHENTICATION_H
#define UI_MNGAUTHENTICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mngAuthentication
{
public:
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *password_txt;
    QLineEdit *empID;
    QPushButton *Login_cmd;
    QLabel *label;
    QLabel *errorMSG;
    QLabel *label_2;

    void setupUi(QDialog *mngAuthentication)
    {
        if (mngAuthentication->objectName().isEmpty())
            mngAuthentication->setObjectName("mngAuthentication");
        mngAuthentication->resize(400, 300);
        formLayoutWidget = new QWidget(mngAuthentication);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(37, 60, 326, 171));
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


        retranslateUi(mngAuthentication);

        QMetaObject::connectSlotsByName(mngAuthentication);
    } // setupUi

    void retranslateUi(QDialog *mngAuthentication)
    {
        mngAuthentication->setWindowTitle(QCoreApplication::translate("mngAuthentication", "Manager Authentication", nullptr));
        empID->setInputMask(QString());
        Login_cmd->setText(QCoreApplication::translate("mngAuthentication", "Verify", nullptr));
        label->setText(QCoreApplication::translate("mngAuthentication", "Admin ID: ", nullptr));
        errorMSG->setText(QString());
        label_2->setText(QCoreApplication::translate("mngAuthentication", "Password: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mngAuthentication: public Ui_mngAuthentication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGAUTHENTICATION_H

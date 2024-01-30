/********************************************************************************
** Form generated from reading UI file 'paymentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENTDIALOG_H
#define UI_PAYMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paymentDialog
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *totalPrice;
    QLabel *label_4;
    QLineEdit *amountPaid;
    QLabel *label_5;
    QLineEdit *changeAmount;
    QLabel *label_6;
    QLineEdit *custID;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okayButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *paymentDialog)
    {
        if (paymentDialog->objectName().isEmpty())
            paymentDialog->setObjectName("paymentDialog");
        paymentDialog->resize(500, 400);
        paymentDialog->setModal(true);
        formLayoutWidget = new QWidget(paymentDialog);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 60, 421, 234));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(40);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(160, 0));
        QFont font;
        font.setPointSize(16);
        label_3->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        totalPrice = new QLineEdit(formLayoutWidget);
        totalPrice->setObjectName("totalPrice");
        totalPrice->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, totalPrice);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(160, 0));
        label_4->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        amountPaid = new QLineEdit(formLayoutWidget);
        amountPaid->setObjectName("amountPaid");

        formLayout->setWidget(1, QFormLayout::FieldRole, amountPaid);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(160, 0));
        label_5->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        changeAmount = new QLineEdit(formLayoutWidget);
        changeAmount->setObjectName("changeAmount");
        changeAmount->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, changeAmount);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(160, 0));
        label_6->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        custID = new QLineEdit(formLayoutWidget);
        custID->setObjectName("custID");
        custID->setReadOnly(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, custID);

        widget = new QWidget(paymentDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(240, 350, 221, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        okayButton = new QPushButton(widget);
        okayButton->setObjectName("okayButton");

        horizontalLayout->addWidget(okayButton);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);


        retranslateUi(paymentDialog);

        QMetaObject::connectSlotsByName(paymentDialog);
    } // setupUi

    void retranslateUi(QDialog *paymentDialog)
    {
        paymentDialog->setWindowTitle(QCoreApplication::translate("paymentDialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("paymentDialog", "Amount to be paid:", nullptr));
        label_4->setText(QCoreApplication::translate("paymentDialog", "Amount Paid:", nullptr));
        label_5->setText(QCoreApplication::translate("paymentDialog", "Change:", nullptr));
        label_6->setText(QCoreApplication::translate("paymentDialog", "Customer Phone Number:", nullptr));
        okayButton->setText(QCoreApplication::translate("paymentDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("paymentDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paymentDialog: public Ui_paymentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENTDIALOG_H

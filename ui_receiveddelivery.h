/********************************************************************************
** Form generated from reading UI file 'receiveddelivery.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEDDELIVERY_H
#define UI_RECEIVEDDELIVERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_receivedDelivery
{
public:
    QCalendarWidget *dateArrived;
    QPushButton *confirmation;

    void setupUi(QDialog *receivedDelivery)
    {
        if (receivedDelivery->objectName().isEmpty())
            receivedDelivery->setObjectName("receivedDelivery");
        receivedDelivery->resize(400, 300);
        dateArrived = new QCalendarWidget(receivedDelivery);
        dateArrived->setObjectName("dateArrived");
        dateArrived->setGeometry(QRect(60, 50, 280, 151));
        confirmation = new QPushButton(receivedDelivery);
        confirmation->setObjectName("confirmation");
        confirmation->setGeometry(QRect(230, 250, 150, 30));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(confirmation->sizePolicy().hasHeightForWidth());
        confirmation->setSizePolicy(sizePolicy);
        confirmation->setMinimumSize(QSize(150, 30));
        confirmation->setMaximumSize(QSize(150, 30));
        QFont font;
        font.setPointSize(14);
        confirmation->setFont(font);
        confirmation->setCursor(QCursor(Qt::PointingHandCursor));
        confirmation->setLayoutDirection(Qt::LeftToRight);

        retranslateUi(receivedDelivery);

        QMetaObject::connectSlotsByName(receivedDelivery);
    } // setupUi

    void retranslateUi(QDialog *receivedDelivery)
    {
        receivedDelivery->setWindowTitle(QCoreApplication::translate("receivedDelivery", "Delivery Received", nullptr));
        confirmation->setText(QCoreApplication::translate("receivedDelivery", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class receivedDelivery: public Ui_receivedDelivery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEDDELIVERY_H

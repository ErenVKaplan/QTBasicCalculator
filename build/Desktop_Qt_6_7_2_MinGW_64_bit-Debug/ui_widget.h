/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *resultLine;
    QListWidget *listWidget;
    QPushButton *DeleteHistoryButton;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *button0;
    QPushButton *button6;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button7;
    QPushButton *button1;
    QPushButton *buttoneq;
    QPushButton *button2;
    QPushButton *button9;
    QPushButton *button3;
    QPushButton *buttonreset;
    QPushButton *button8;
    QFormLayout *formLayout;
    QPushButton *buttonminus;
    QPushButton *buttondiv;
    QPushButton *buttonplus;
    QPushButton *buttonmulti;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        resultLine = new QLineEdit(Widget);
        resultLine->setObjectName("resultLine");
        resultLine->setGeometry(QRect(90, 140, 351, 41));
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(470, 140, 256, 131));
        DeleteHistoryButton = new QPushButton(Widget);
        DeleteHistoryButton->setObjectName("DeleteHistoryButton");
        DeleteHistoryButton->setGeometry(QRect(470, 270, 91, 24));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 180, 356, 118));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        button0 = new QPushButton(widget);
        button0->setObjectName("button0");

        gridLayout->addWidget(button0, 4, 1, 1, 2);

        button6 = new QPushButton(widget);
        button6->setObjectName("button6");

        gridLayout->addWidget(button6, 2, 3, 1, 1);

        button4 = new QPushButton(widget);
        button4->setObjectName("button4");

        gridLayout->addWidget(button4, 2, 0, 1, 1);

        button5 = new QPushButton(widget);
        button5->setObjectName("button5");

        gridLayout->addWidget(button5, 2, 1, 1, 1);

        button7 = new QPushButton(widget);
        button7->setObjectName("button7");

        gridLayout->addWidget(button7, 3, 0, 1, 1);

        button1 = new QPushButton(widget);
        button1->setObjectName("button1");

        gridLayout->addWidget(button1, 1, 0, 1, 1);

        buttoneq = new QPushButton(widget);
        buttoneq->setObjectName("buttoneq");

        gridLayout->addWidget(buttoneq, 4, 3, 1, 1);

        button2 = new QPushButton(widget);
        button2->setObjectName("button2");

        gridLayout->addWidget(button2, 1, 1, 1, 1);

        button9 = new QPushButton(widget);
        button9->setObjectName("button9");

        gridLayout->addWidget(button9, 3, 3, 1, 1);

        button3 = new QPushButton(widget);
        button3->setObjectName("button3");

        gridLayout->addWidget(button3, 1, 3, 1, 1);

        buttonreset = new QPushButton(widget);
        buttonreset->setObjectName("buttonreset");

        gridLayout->addWidget(buttonreset, 4, 0, 1, 1);

        button8 = new QPushButton(widget);
        button8->setObjectName("button8");

        gridLayout->addWidget(button8, 3, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        buttonminus = new QPushButton(widget);
        buttonminus->setObjectName("buttonminus");

        formLayout->setWidget(0, QFormLayout::LabelRole, buttonminus);

        buttondiv = new QPushButton(widget);
        buttondiv->setObjectName("buttondiv");

        formLayout->setWidget(1, QFormLayout::LabelRole, buttondiv);

        buttonplus = new QPushButton(widget);
        buttonplus->setObjectName("buttonplus");

        formLayout->setWidget(2, QFormLayout::LabelRole, buttonplus);

        buttonmulti = new QPushButton(widget);
        buttonmulti->setObjectName("buttonmulti");

        formLayout->setWidget(3, QFormLayout::LabelRole, buttonmulti);


        gridLayout_2->addLayout(formLayout, 0, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        DeleteHistoryButton->setText(QCoreApplication::translate("Widget", "Delete History", nullptr));
        button0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        button6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        button4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        button5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        button7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        button1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        buttoneq->setText(QCoreApplication::translate("Widget", "=", nullptr));
        button2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        button9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        button3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        buttonreset->setText(QCoreApplication::translate("Widget", "C", nullptr));
        button8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        buttonminus->setText(QCoreApplication::translate("Widget", "-", nullptr));
        buttondiv->setText(QCoreApplication::translate("Widget", "/", nullptr));
        buttonplus->setText(QCoreApplication::translate("Widget", "+", nullptr));
        buttonmulti->setText(QCoreApplication::translate("Widget", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

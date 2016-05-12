/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *addressEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_3;
    QLineEdit *cityEdit;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *zipEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *okay1;
    QPushButton *cancel1;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *guestButton;
    QPushButton *adminButton;
    QWidget *page_2;
    QCommandLinkButton *goBack;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *okay2;
    QPushButton *cancel2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(453, 382);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(Dialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout_11 = new QHBoxLayout(page);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        nameEdit = new QLineEdit(page);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        horizontalLayout->addWidget(nameEdit);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_7->addWidget(label_2);

        addressEdit = new QLineEdit(page);
        addressEdit->setObjectName(QStringLiteral("addressEdit"));

        horizontalLayout_7->addWidget(addressEdit);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_10->addWidget(label_3);

        cityEdit = new QLineEdit(page);
        cityEdit->setObjectName(QStringLiteral("cityEdit"));

        horizontalLayout_10->addWidget(cityEdit);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        zipEdit = new QLineEdit(page);
        zipEdit->setObjectName(QStringLiteral("zipEdit"));

        horizontalLayout_2->addWidget(zipEdit);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        comboBox = new QComboBox(page);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        okay1 = new QPushButton(page);
        okay1->setObjectName(QStringLiteral("okay1"));

        horizontalLayout_5->addWidget(okay1);

        cancel1 = new QPushButton(page);
        cancel1->setObjectName(QStringLiteral("cancel1"));

        horizontalLayout_5->addWidget(cancel1);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        guestButton = new QPushButton(page);
        guestButton->setObjectName(QStringLiteral("guestButton"));

        horizontalLayout_6->addWidget(guestButton);

        adminButton = new QPushButton(page);
        adminButton->setObjectName(QStringLiteral("adminButton"));

        horizontalLayout_6->addWidget(adminButton);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_11->addLayout(verticalLayout_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        goBack = new QCommandLinkButton(page_2);
        goBack->setObjectName(QStringLiteral("goBack"));
        goBack->setGeometry(QRect(140, 220, 187, 41));
        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(2, 34, 241, 181));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_5->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_5->addWidget(label_7);


        horizontalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        usernameEdit = new QLineEdit(layoutWidget);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));

        verticalLayout_4->addWidget(usernameEdit);

        passwordEdit = new QLineEdit(layoutWidget);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));

        verticalLayout_4->addWidget(passwordEdit);


        horizontalLayout_8->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        okay2 = new QPushButton(layoutWidget);
        okay2->setObjectName(QStringLiteral("okay2"));

        horizontalLayout_9->addWidget(okay2);

        cancel2 = new QPushButton(layoutWidget);
        cancel2->setObjectName(QStringLiteral("cancel2"));

        horizontalLayout_9->addWidget(cancel2);


        verticalLayout_6->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(Dialog);
        QObject::connect(cancel2, SIGNAL(clicked()), Dialog, SLOT(close()));
        QObject::connect(cancel1, SIGNAL(clicked()), Dialog, SLOT(close()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "Company Name:", 0));
        label_2->setText(QApplication::translate("Dialog", "Address:", 0));
        label_3->setText(QApplication::translate("Dialog", "City:", 0));
        label_5->setText(QApplication::translate("Dialog", "Zip Code:", 0));
        label_4->setText(QApplication::translate("Dialog", "State:", 0));
        okay1->setText(QApplication::translate("Dialog", "Okay", 0));
        cancel1->setText(QApplication::translate("Dialog", "Cancel", 0));
        guestButton->setText(QApplication::translate("Dialog", "Guest", 0));
        adminButton->setText(QApplication::translate("Dialog", "Admin", 0));
        goBack->setText(QApplication::translate("Dialog", "Go Back", 0));
        label_6->setText(QApplication::translate("Dialog", "Username:", 0));
        label_7->setText(QApplication::translate("Dialog", "Password:", 0));
        okay2->setText(QApplication::translate("Dialog", "Okay", 0));
        cancel2->setText(QApplication::translate("Dialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

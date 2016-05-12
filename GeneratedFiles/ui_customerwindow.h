/********************************************************************************
** Form generated from reading UI file 'customerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERWINDOW_H
#define UI_CUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_8;
    QTextEdit *textEdit_5;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_7;
    QTextEdit *textEdit_3;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_9;
    QTextEdit *textEdit_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *pageLabel;
    QPushButton *pushButton_2;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *textEdit_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CustomerWindow)
    {
        if (CustomerWindow->objectName().isEmpty())
            CustomerWindow->setObjectName(QStringLiteral("CustomerWindow"));
        CustomerWindow->resize(800, 600);
        centralwidget = new QWidget(CustomerWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        textEdit_2 = new QTextEdit(tab_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_6 = new QVBoxLayout(tab_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        stackedWidget = new QStackedWidget(tab_3);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_8 = new QVBoxLayout(page);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        textEdit_5 = new QTextEdit(page);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setReadOnly(true);

        verticalLayout_8->addWidget(textEdit_5);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_7 = new QVBoxLayout(page_2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        textEdit_3 = new QTextEdit(page_2);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setReadOnly(true);

        verticalLayout_7->addWidget(textEdit_3);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_9 = new QVBoxLayout(page_3);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        textEdit_6 = new QTextEdit(page_3);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setReadOnly(true);

        verticalLayout_9->addWidget(textEdit_6);

        stackedWidget->addWidget(page_3);

        verticalLayout_4->addWidget(stackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(498, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pageLabel = new QLabel(tab_3);
        pageLabel->setObjectName(QStringLiteral("pageLabel"));

        horizontalLayout->addWidget(pageLabel);

        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        textEdit_4 = new QTextEdit(tab_4);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setReadOnly(true);

        verticalLayout_5->addWidget(textEdit_4);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        CustomerWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CustomerWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        CustomerWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CustomerWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CustomerWindow->setStatusBar(statusbar);

        retranslateUi(CustomerWindow);

        tabWidget->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(CustomerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CustomerWindow)
    {
        CustomerWindow->setWindowTitle(QApplication::translate("CustomerWindow", "MainWindow", 0));
        textEdit->setHtml(QApplication::translate("CustomerWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The iCyberSecurity team consists of highly skilled, certified IT security experts and engineers. Our senior project leaders have been working in the information security industry since its inception. The majority of our staff hold Top Secret security clearances or above, allowing us to work in virtually any environment, and average at least five years of experience:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; "
                        "font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Developing, evaluating and implementing cyber security policy</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Conducting risk and vulnerability assessments</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Securing and optimizing our nation\342\200\231s most critical and private IT systems</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Most importantly, when you\342\200\231re a iCyberSecurity customer, we commit to you as your partner in information security. Your problem"
                        "s are our problems; we are personally engaged with your project from initiation through completion, and dedicate ourselves to your needs when you retain our services on an ongoing basis. Throughout every consulting project, iCyberSecurity shares its best practices and corporate knowledge. In this way, we transfer our expertise to our customers, providing you with a level set and the ability to confidently monitor, manage, and improve your risk posture on an ongoing basis.</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CustomerWindow", "Intro", 0));
        textEdit_2->setHtml(QApplication::translate("CustomerWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">LEVEL 1: $5,000.00</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Services Include: </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Digital forensics services</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Vulnerability and risk assessments</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Internal and external penetration testing</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Policy and plan development</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Configuration management, design, and remediation</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">LEVEL 2: $7,500.00</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0"
                        "px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Services Include:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Level 1 Plan</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Enterprise security architecture design and re-design</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Malicious code review</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Computer security incident response</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right"
                        ":0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Engineering and architecture design</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">LEVEL 3: $9,000.00</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Services Include:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Level 2 Plan</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Operations management</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px;\"><span style=\" font-size:10pt;\">	Application and software security assurance</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Insider threat and APT assessment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	Social engineering (targeted phishing)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">	IT risk management and compliance</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">All plays come with iCyberSecurity Garuantee!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-ri"
                        "ght:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">If you are not happy with your services after a month we will provide a refund.</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CustomerWindow", "Pricing", 0));
        textEdit_5->setHtml(QApplication::translate("CustomerWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1</p></body></html>", 0));
        textEdit_3->setHtml(QApplication::translate("CustomerWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2</p></body></html>", 0));
        textEdit_6->setHtml(QApplication::translate("CustomerWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3</p></body></html>", 0));
        pushButton->setText(QApplication::translate("CustomerWindow", "Prev", 0));
        pageLabel->setText(QString());
        pushButton_2->setText(QApplication::translate("CustomerWindow", "Next", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("CustomerWindow", "Testimonials", 0));
        textEdit_4->setHtml(QApplication::translate("CustomerWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\" bgcolor=\"#ffffff\">\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"LC28\"></a><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:8pt; color:#333333;\">C</span><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:8pt; color:#333333;\">ontact Info:</span></p></td>\n"
""
                        "<td></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"L29\"></a><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:8pt; color:#333333;\">i</span><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:8pt; color:#333333;\">CyberSecurity inc.</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
""
                        "<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"L31\"></a><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:8pt; color:#333333;\">7</span><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:8pt; color:#333333;\">89456 Jamaica Island</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"L32\"></a><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:8pt; color:#333333;\">J</span><span styl"
                        "e=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:8pt; color:#333333;\">ahmanway, Jamaica 98765</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"L33\"></a><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:8pt; color:#333333;\">(</span><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:8pt; color:#333333;\">555)123-5555</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td></tr>\n"
""
                        "<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"L34\"></a><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:8pt; color:#333333;\">h</span><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:8pt; color:#333333;\">ttps://iCyberSecurity.com</span></p></td></tr></table></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("CustomerWindow", "Contact Us", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerWindow: public Ui_CustomerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWINDOW_H

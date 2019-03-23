/********************************************************************************
** Form generated from reading UI file 'QUIZ.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZ_H
#define UI_QUIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QUIZClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QUIZClass)
    {
        if (QUIZClass->objectName().isEmpty())
            QUIZClass->setObjectName(QStringLiteral("QUIZClass"));
        QUIZClass->resize(600, 400);
        menuBar = new QMenuBar(QUIZClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QUIZClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QUIZClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QUIZClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QUIZClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QUIZClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QUIZClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QUIZClass->setStatusBar(statusBar);

        retranslateUi(QUIZClass);

        QMetaObject::connectSlotsByName(QUIZClass);
    } // setupUi

    void retranslateUi(QMainWindow *QUIZClass)
    {
        QUIZClass->setWindowTitle(QApplication::translate("QUIZClass", "QUIZ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QUIZClass: public Ui_QUIZClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZ_H

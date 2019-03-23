/********************************************************************************
** Form generated from reading UI file 'PresenterView.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESENTERVIEW_H
#define UI_PRESENTERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PresenterView
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *questionList;
    QLabel *idLabel;
    QLineEdit *idBox;
    QLabel *textLabel;
    QLineEdit *textBox;
    QLabel *answerLabel;
    QLineEdit *answerBox;
    QLabel *scoreLabel;
    QLineEdit *scoreBox;
    QPushButton *addButton;

    void setupUi(QWidget *PresenterView)
    {
        if (PresenterView->objectName().isEmpty())
            PresenterView->setObjectName(QStringLiteral("PresenterView"));
        PresenterView->resize(400, 304);
        verticalLayout = new QVBoxLayout(PresenterView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        questionList = new QTableWidget(PresenterView);
        if (questionList->columnCount() < 4)
            questionList->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        questionList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        questionList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        questionList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        questionList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        questionList->setObjectName(QStringLiteral("questionList"));

        verticalLayout->addWidget(questionList);

        idLabel = new QLabel(PresenterView);
        idLabel->setObjectName(QStringLiteral("idLabel"));

        verticalLayout->addWidget(idLabel);

        idBox = new QLineEdit(PresenterView);
        idBox->setObjectName(QStringLiteral("idBox"));

        verticalLayout->addWidget(idBox);

        textLabel = new QLabel(PresenterView);
        textLabel->setObjectName(QStringLiteral("textLabel"));

        verticalLayout->addWidget(textLabel);

        textBox = new QLineEdit(PresenterView);
        textBox->setObjectName(QStringLiteral("textBox"));

        verticalLayout->addWidget(textBox);

        answerLabel = new QLabel(PresenterView);
        answerLabel->setObjectName(QStringLiteral("answerLabel"));

        verticalLayout->addWidget(answerLabel);

        answerBox = new QLineEdit(PresenterView);
        answerBox->setObjectName(QStringLiteral("answerBox"));

        verticalLayout->addWidget(answerBox);

        scoreLabel = new QLabel(PresenterView);
        scoreLabel->setObjectName(QStringLiteral("scoreLabel"));

        verticalLayout->addWidget(scoreLabel);

        scoreBox = new QLineEdit(PresenterView);
        scoreBox->setObjectName(QStringLiteral("scoreBox"));

        verticalLayout->addWidget(scoreBox);

        addButton = new QPushButton(PresenterView);
        addButton->setObjectName(QStringLiteral("addButton"));

        verticalLayout->addWidget(addButton);


        retranslateUi(PresenterView);

        QMetaObject::connectSlotsByName(PresenterView);
    } // setupUi

    void retranslateUi(QWidget *PresenterView)
    {
        PresenterView->setWindowTitle(QApplication::translate("PresenterView", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = questionList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PresenterView", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = questionList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PresenterView", "text", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = questionList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PresenterView", "answer", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = questionList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PresenterView", "score", nullptr));
        idLabel->setText(QApplication::translate("PresenterView", "ID", nullptr));
        textLabel->setText(QApplication::translate("PresenterView", "TEXT", nullptr));
        answerLabel->setText(QApplication::translate("PresenterView", "ANSWER", nullptr));
        scoreLabel->setText(QApplication::translate("PresenterView", "SCORE", nullptr));
        addButton->setText(QApplication::translate("PresenterView", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PresenterView: public Ui_PresenterView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESENTERVIEW_H

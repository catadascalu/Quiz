/********************************************************************************
** Form generated from reading UI file 'ParticipantView.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTICIPANTVIEW_H
#define UI_PARTICIPANTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParticipantView
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *questionTable;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *answer;
    QLineEdit *answerBoxx;
    QPushButton *answerButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *score;
    QLineEdit *scoreBox;

    void setupUi(QWidget *ParticipantView)
    {
        if (ParticipantView->objectName().isEmpty())
            ParticipantView->setObjectName(QStringLiteral("ParticipantView"));
        ParticipantView->resize(400, 300);
        verticalLayout_5 = new QVBoxLayout(ParticipantView);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        questionTable = new QTableWidget(ParticipantView);
        if (questionTable->columnCount() < 3)
            questionTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        questionTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        questionTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        questionTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        questionTable->setObjectName(QStringLiteral("questionTable"));

        verticalLayout_4->addWidget(questionTable);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        answer = new QLabel(ParticipantView);
        answer->setObjectName(QStringLiteral("answer"));

        horizontalLayout->addWidget(answer);

        answerBoxx = new QLineEdit(ParticipantView);
        answerBoxx->setObjectName(QStringLiteral("answerBoxx"));

        horizontalLayout->addWidget(answerBoxx);

        answerButton = new QPushButton(ParticipantView);
        answerButton->setObjectName(QStringLiteral("answerButton"));

        horizontalLayout->addWidget(answerButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        score = new QLabel(ParticipantView);
        score->setObjectName(QStringLiteral("score"));

        horizontalLayout_2->addWidget(score);

        scoreBox = new QLineEdit(ParticipantView);
        scoreBox->setObjectName(QStringLiteral("scoreBox"));

        horizontalLayout_2->addWidget(scoreBox);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(ParticipantView);

        QMetaObject::connectSlotsByName(ParticipantView);
    } // setupUi

    void retranslateUi(QWidget *ParticipantView)
    {
        ParticipantView->setWindowTitle(QApplication::translate("ParticipantView", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = questionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ParticipantView", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = questionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ParticipantView", "TEXT", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = questionTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ParticipantView", "SCORE", nullptr));
        answer->setText(QApplication::translate("ParticipantView", "ANSWER", nullptr));
        answerButton->setText(QApplication::translate("ParticipantView", "SUBMIT", nullptr));
        score->setText(QApplication::translate("ParticipantView", "SCORE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParticipantView: public Ui_ParticipantView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTICIPANTVIEW_H

#pragma once
#include<QWidget>
#include<qtablewidget.h>
#include<qlistwidget.h>
#include<qmessagebox.h>
#include "ui_ParticipantView.h"
#include "Observer.h"
#include "Presenter.h"
#include "Participant.h"

class ParticipantView :public QWidget, public Observer
{
	Q_OBJECT
public:
	Participant  participant;
	Presenter & presenter;
public:
	ParticipantView(Participant p1, Presenter& p, QWidget* parent = Q_NULLPTR);
	~ParticipantView();

	void update() override;

private:

	Ui::ParticipantView ui;
	void populateListObs();
private slots:
	void answerQuestion();
	void disable(int x, int y);
	//void on_tableQ_itemClicked(QTableWidgetItem *item);
	//void on_tableQ_cellClicked(int row, int column);
	//int getListSelectedIndex();
	//Question listItemChanged();
	//void submit(Question q, int idx);
	//void connectSignals();

};
#pragma once
#include<QWidget>
#include<qtablewidget.h>
#include<qmessagebox.h>
#include "ui_presenterview.h"
#include "Presenter.h"


class PresenterView : public QWidget
{
	Q_OBJECT;

private:
	Presenter & presenter;

public:
	PresenterView(Presenter& p, QWidget* parent = Q_NULLPTR);
	~PresenterView() {}

private:
	Ui::PresenterView ui;

	void populateList();
	private slots:
	void addQuestion();
};

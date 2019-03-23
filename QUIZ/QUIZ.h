#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QUIZ.h"

class QUIZ : public QMainWindow
{
	Q_OBJECT

public:
	QUIZ(QWidget *parent = Q_NULLPTR);

private:
	Ui::QUIZClass ui;
};

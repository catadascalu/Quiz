#include "PresenterView.h"

PresenterView::PresenterView(Presenter & p, QWidget * parent) : QWidget(parent), presenter(p)
{
	ui.setupUi(this);
	this->presenter.getFromFile("C:/Users/catad/source/repos/QUIZ/questions.txt");
	this->populateList();

	//SLOTS
	connect(ui.addButton, SIGNAL(clicked()), this, SLOT(addQuestion()));
	
}

void PresenterView::populateList()
{
	//if (this->ui.questionList->count() > 0)
	ui.questionList->clear();
	int index;
	ui.questionList->setRowCount(this->presenter.getQs().size());

	index = 0;
	this->presenter.sort();
	for (auto q : this->presenter.getQs())
	{
		ui.questionList->setItem(index, 0, new QTableWidgetItem(QString::fromStdString(std::to_string(q.getId()))));
		ui.questionList->setItem(index, 1, new QTableWidgetItem(QString::fromStdString(q.getText())));
		ui.questionList->setItem(index, 2, new QTableWidgetItem(QString::fromStdString(q.getAnswer())));
		ui.questionList->setItem(index, 3, new QTableWidgetItem(QString::fromStdString(std::to_string(q.getScore()))));
		index++;
	}
}

void PresenterView::addQuestion()
{
	
	QString id = ui.idBox->text();
	QString text = ui.textBox->text();
	QString answer = ui.answerBox->text();
	QString score = ui.scoreBox->text();
	if(text.toStdString() == "")
	{
		QMessageBox messageBox;
		messageBox.critical(0, "Error", "Must enter text!");
		messageBox.setFixedSize(500, 200);
		messageBox.show();
		return;
	}
	for (auto q : this->presenter.getQs())
		if (id.toInt() == q.getId())
		{
			QMessageBox messageBox;
			messageBox.critical(0, "Error", "ID not unique!");
			messageBox.setFixedSize(500, 200);
			messageBox.show();
			return;
		}
	presenter.addQuestion(id.toInt(), text.toStdString(), answer.toStdString(), score.toInt());

	this->populateList();
	this->presenter.notify();
}

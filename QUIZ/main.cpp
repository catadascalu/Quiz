#include "QUIZ.h"
#include <QtWidgets/QApplication>
#include "Presenter.h"
#include "PresenterView.h"
#include "ParticipantView.h"
#include "Repo.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Presenter presenter;
	PresenterView PW{ presenter };

	Repo participants = Repo();
	participants.loadFromFile("C:/Users/catad/source/repos/QUIZ/participants.txt");
	//for (auto p : participants.getAll())
	
	ParticipantView user1{ participants.getAll().at(0), presenter };
	user1.setWindowTitle(QString::fromStdString(participants.getAll().at(0).getName()));
	user1.show();

	ParticipantView user2{ participants.getAll().at(1), presenter };
	user2.setWindowTitle(QString::fromStdString(participants.getAll().at(1).getName()));
	user2.show();

	ParticipantView user3{ participants.getAll().at(2), presenter };
	user3.setWindowTitle(QString::fromStdString(participants.getAll().at(2).getName()));
	user3.show();

	ParticipantView user4{ participants.getAll().at(3), presenter };
	user4.setWindowTitle(QString::fromStdString(participants.getAll().at(3).getName()));
	user4.show();
	
	PW.setWindowTitle("Presenter");
	PW.show();
	//QUIZ w;
	//w.show();
	return a.exec();
}

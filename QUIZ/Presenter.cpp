#include "Presenter.h"

void Presenter::addQuestion(int id, std::string text, std::string answer, int score)
{
	Question qNew{ id, text, answer, score };
	/*
	for (auto q : this->questions)
		if (qNew == q)
			return;
			*/
	this->questions.push_back(qNew);
	this->writeToFile();
}

void Presenter::sort()
{
	std::sort(questions.begin(), questions.end(), [](const auto& lhs, const auto& rhs)
	{
		return lhs.getId() < rhs.getId();
	});
}

void Presenter::sortScore()
{
	std::sort(questions.begin(), questions.end(), [](const auto& lhs, const auto& rhs)
	{
		return lhs.getScore() > rhs.getScore();
	});
}

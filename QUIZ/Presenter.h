#pragma once
#include "Question.h"
#include<vector>
#include<algorithm>
#include "Observer.h"

using namespace std;

class Presenter : public Observable
{
private:
	std::vector<Question> questions;
	//int current;

public:
	Presenter() {}
	~Presenter() {}

	std::vector<Question> getQs() const { return this->questions; }
	void getFromFile(std::string filename)
	{
		ifstream file(filename);
		if (file.is_open())
		{
			Question q = Question();
			while (file >> q)
			{
				int ok = 0;
				for (auto q1 : this->questions)
					if (q1.getId() == q.getId())
					{
						ok = 1;
						break;
					}
				if(ok!=1)
					this->questions.push_back(q);
			}

			file.close();
		}
	}
	void writeToFile()
	{
		ofstream file("C:/Users/catad/source/repos/QUIZ/questions.txt");
		if (file.is_open())
		{
			for (auto q : this->questions)
				file << q;
			file.close();
		}
	}
	void addQuestion(int id, std::string text, std::string answer, int score);
	bool sortById(const Question& q1, const Question& q2) { return q1.getId() < q2.getId(); }
	void sort();
	void sortScore();

};
#pragma once
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

class Question
{
private:
	int id;
	std::string text;
	std::string answer;
	int score;
public:
	Question() {}
	Question(int i, string txt, string answ, int s) : id(i), text(txt), answer(answ), score(s) {}
	~Question() {}

	int getId() const { return this->id; }
	string getText() const { return this->text; }
	string getAnswer() const { return this->answer; }
	int getScore() const { return this->score; }

	std::string toString()
	{
		std::string str;
		str = to_string(this->id) + ": " + this->text + "? - " + to_string(this->score) + "\n";
		return str;
	}

	friend bool operator ==(const Question& q1, const Question& q2)
	{
		return q1.id == q2.id;
	}

	friend std::ostream& operator<<(std::ostream& os, const Question& q)
	{
		os << q.id << "," << q.text << "," << q.answer << "," << q.score<<endl;
		return os;
	}

	friend std::istream& operator>>(std::istream& is, Question& q)
	{
		std::string line;
		getline(is, line);
		std::stringstream ss(line);
		std::string attribute;
		std::vector<string> temp;
		while (getline(ss, attribute, ','))
		{
			temp.push_back(attribute);
		}
		if (temp.size() != 4)
			return is;

		q.id = std::stoi(temp.at(0));
		q.text = temp.at(1);
		q.answer = temp.at(2);
		q.score = std::stoi(temp.at(3));

		return is;
	}
};
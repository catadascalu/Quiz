#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

class Participant
{
protected:
	std::string name;
	int score;
public:
	Participant() 
	{
		this->score = 0;
	}
	Participant(string n, int s) : name(n), score(s) {}
	~Participant() {}

	std::string getName() const { return this->name; }
	int getScore() const { return this->score; }
	void setScore(int s) { this->score = s; }

	friend std::istream& operator>>(std::istream& is, Participant& p)
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
		if (temp.size() != 2)
			return is;

		p.name = temp.at(0);
		p.score = std::stoi(temp.at(1));

		return is;
	}
};
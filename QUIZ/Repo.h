#pragma once
#include "Participant.h"

class Repo
{
private:
	std::vector<Participant> participants;
public:
	Repo() {}
	~Repo() {}

	std::vector<Participant> getAll() { return this->participants; }
	void loadFromFile(std::string filename);

};
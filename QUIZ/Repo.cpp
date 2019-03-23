#include "Repo.h"

void Repo::loadFromFile(std::string filename)
{
	ifstream file(filename);
	if (file.is_open())
	{
		Participant p{};
		while (file >> p)
		{
			this->participants.push_back(p);
		}
		file.close();
	}
}

#pragma once
#include<vector>
#include<algorithm>

using namespace std;

class Observer
{
public:
	virtual void update() = 0;
	virtual ~Observer() {}

};

//subject
class Observable
{
private:
	std::vector<Observer*> observers;
public:
	virtual ~Observable() {}

	void addObserver(Observer* obs)
	{
		this->observers.push_back(obs);
	}

	void removeObserver(Observer* obs)
	{
		this->observers.erase(std::remove(observers.begin(), observers.end(), obs));
	}

	void notify()
	{
		for (auto obs : this->observers)
		{
			obs->update();
		}
	}
};
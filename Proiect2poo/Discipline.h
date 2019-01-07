#pragma once

#include "Activity.h"
#include <vector>
#include<string>

class Discipline
{
public:
	Discipline();
	Discipline(std::string subject, std::string type, std::vector<Activity*> activities);

	std::string getSubject();
	std::string getType();

	void setSubject(std::string);
	void setType(std::string);

	friend std::istream& operator >> (std::istream& stream, Discipline& object);
	friend std::ostream& operator << (std::ostream& stream, const Discipline& object);

private:
	std::string mSubject;
	std::string mType;
	std::vector<Activity*> mActivities;
	int mPresences;
};


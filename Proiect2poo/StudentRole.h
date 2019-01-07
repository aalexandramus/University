#pragma once
#include "Role.h"
#include "StudyGroup.h"
class StudentRole :public Role {
private:
	int mID;
	std::string mDomain;
	StudyGroup* mGroup;
public:
	StudentRole(int id, std::string domain, StudyGroup* group);
	void setID(int);
	int getID();

	void setDomain(std::string);
	std::string getDomain();
};

#pragma once
#include "Person.h"


class Student :public Person {
	std::string mGroup;
	std::string mRegistrationNr;
	std::string mDomain;

public:
	Student(std::string CNP, std::string FirstName, std::string LastName, std::string Email, std::string Group, std::string RegistrationNr, std::string Domain)
		: Person(CNP, FirstName, LastName, Email) {
		mGroup = Group;
		mRegistrationNr = RegistrationNr;
		mDomain = Domain;
	}
};

#include "pch.h"
#include "Person.h"

Person::Person(std::string CNP, std::string FirstName, std::string LastName, std::string Email)
	: mCNP(CNP)
	, mFirstName(FirstName)
	, mLastName(LastName)
	, mEmail(Email) {}

void Person::setCnp(std::string CNP)
{
	mCNP = CNP;
}

std::string Person::getCnp()
{
	return mCNP;
}

void Person::setFirstName(std::string FirstName)
{
	mFirstName = FirstName;
}

std::string Person::getFirstName()
{
	return mFirstName;
}

void Person::setLastName(std::string LastName)
{
	mLastName = LastName;
}

std::string Person::getLastName()
{
	return mLastName;
}

void Person::setEmail(std::string Email)
{
	mEmail = Email;
}

std::string Person::getEmail()
{
	return mEmail;
}

void Person::addRole(Role * role)
{
	mRoles.push_back(role);
}

std::istream & operator>>(std::istream & stream, Person & object)
{
	stream >> object.mCNP;
	stream >> object.mFirstName;
	stream >> object.mLastName;
	stream >> object.mEmail;
	return stream;
}

std::ostream & operator<<(std::ostream & stream, Person & object)
{

	stream << object.mCNP;
	stream << object.mFirstName;
	stream << object.mLastName;
	stream << object.mEmail;
	return stream;
}

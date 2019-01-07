#include "pch.h"
#include "PersonRepository.h"
#include <iostream>
#include <vector>

Person * PersonRepository::findByFullName(std::string FirstName, std::string LastName)
{

	for (unsigned i = 0; i < mThings.size(); i++)
		if (mThings.at(i)->getFirstName() == FirstName && mThings.at(i)->getLastName() == LastName)
			return mThings.at(i);
	return NULL;
}

Person * PersonRepository::findByCnp(std::string CNP)
{
	for (unsigned i = 0; i < mThings.size(); i++)
		if (mThings.at(i)->getCnp() == CNP)
			return mThings.at(i);
	return NULL;
}





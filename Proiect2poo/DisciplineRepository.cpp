#include "pch.h"

#include "DisciplineRepository.h"

Discipline* DisciplineRepository::findBySubject(std::string name)
{
	for (unsigned int i = 0; i < mThings.size(); i++)
		if (mThings.at(i)->getSubject() == name)
			return mThings.at(i);
	return NULL;
}

Discipline* DisciplineRepository::findByType(std::string type)
{
	for (unsigned int i = 0; i < mThings.size(); i++)
		if (mThings.at(i)->getType() == type)
			return mThings.at(i);
	return NULL;
}
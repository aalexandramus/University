#include "pch.h"
#include <iostream>
#include <vector>
#include "ActivityRepository.h"

Activity * ActivityRepository::findByLocation(Room* Location)
{
	for (unsigned i = 0; i < mThings.size(); i++)
		if (mThings.at(i)->getLocation() == Location)
			return mThings.at(i);
	return NULL;
}

Activity * ActivityRepository::findByOwner(Person* Owner)
{
	for (unsigned i = 0; i < mThings.size(); i++)
		if (mThings.at(i)->getOwner() == Owner)
			return mThings.at(i);
	return NULL;
}

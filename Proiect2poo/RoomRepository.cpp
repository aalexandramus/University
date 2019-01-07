#include "pch.h"
#include "RoomRepository.h"
#include <vector>

Room * RoomRepository::findByName(std::string Name)
{
	for (unsigned i = 0; i < mThings.size(); i++)
		if (mThings.at(i)->getName() == Name)
			return mThings.at(i);
	return NULL;
}


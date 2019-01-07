#pragma once
#include "Repository.h"
#include "Room.h"
#include <string>

class RoomRepository :public Repository<Room> {
public:
	Room* findByName(std::string Name);

};

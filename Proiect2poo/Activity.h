#pragma once
#include "Room.h"
#include "Person.h"
class  Activity {
	Room* mLocation;
	Person* mOwner;
	std::string mDescription;
public:
	Activity(Room* Location, Person* Owner, std::string Description);
	void setLocation(Room* Location);
	Room* getLocation();
	void setOwner(Person* Owner);
	Person* getOwner();

	friend std::istream& operator >> (std::istream& stream, Activity& object);
	friend std::ostream& operator << (std::ostream& stream, const Activity& object);

};
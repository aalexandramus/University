#include "pch.h"
//#include <iostream>
#include "Activity.h"

Activity::Activity(Room * Location, Person * Owner, std::string Description)
	:mLocation(Location)
	, mOwner(Owner)
	, mDescription(Description) {}

void Activity::setLocation(Room * Location)
{
	mLocation = Location;
}

Room * Activity::getLocation()
{
	return mLocation;
}

void Activity::setOwner(Person * Owner)
{
	mOwner = Owner;
}

Person * Activity::getOwner()
{
	return mOwner;
}

std::istream& operator >> (std::istream& stream, Activity& object)
{
	stream >> *dynamic_cast<Room*>(object.mLocation);
	stream >> *dynamic_cast<Person*>(object.mOwner);
	stream >> object.mDescription;
	return stream;
}

std::ostream& operator << (std::ostream& stream, const Activity& object)
{
	stream << object.mDescription << " - ";
	stream << *dynamic_cast<Room*> (object.mLocation);
	stream << *dynamic_cast<Person*> (object.mOwner);
	return stream;
}

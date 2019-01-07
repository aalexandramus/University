#include "pch.h"
#include "Room.h"


Room::Room(std::string name, int Etaj, int Locuri)
	:mName(name)
	, mEtaj(Etaj)
	, mLocuri(Locuri)
{
}

void Room::setName(std::string Name)
{
	mName = Name;
}

std::string Room::getName()
{
	return mName;
}

void Room::setEtaj(int Etaj)
{
	mEtaj = Etaj;
}

int Room::getEtaj()
{
	return mEtaj;;
}

void Room::setLocuri(int Locuri)
{
	mLocuri = Locuri;
}

int Room::getLocuri()
{
	return mLocuri;
}

std::istream& operator>>(std::istream& stream, Room& object)
{
	stream >> object.mName;
	stream >> object.mEtaj;
	stream >> object.mLocuri;
	return stream;

}

std::ostream& operator<<(std::ostream& stream, const Room& object)
{
	stream << object.mName << '/n';
	stream << object.mEtaj << '/n';
	stream << object.mLocuri << '/n';
	return stream;
}
#pragma once
#include <string>
#include <vector>
class Room {
	std::string mName;
	int mEtaj;
	int mLocuri;
public:
	Room(std::string name = "", int Etaj = 0, int Locuri = 0);
	void setName(std::string Name);
	std::string getName();
	void setEtaj(int Etaj);
	int getEtaj();
	void setLocuri(int Locuri);
	int getLocuri();

	friend std::istream& operator>>(std::istream& stream, Room& object);
	friend std::ostream& operator<<(std::ostream& stream, const Room& object);
};

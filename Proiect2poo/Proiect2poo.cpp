// Proiect2poo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Person.h"
#include <string>
#include "Room.h"
#include "Activity.h"
#include "StudentRole.h"
#include "TeacherRole.h"
#include "Role.h"
#include "PersonRepository.h"
#include "ActivityRepository.h"
#include "RoomRepository.h"


int main()
{
	PersonRepository pr;
	RoomRepository rr;
	ActivityRepository ar;
	pr.add(new Person("12345678", "Popescu", "Ion", "popescu@ion.com"));
	rr.add(new Room("Titeica", 0, 200));
	ar.add(new Activity(rr.findByName("Titeica"), pr.findByFullName("Popescu", "Ion"), "Curs"));


}


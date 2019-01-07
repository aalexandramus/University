#pragma once
#pragma once
#include "Repository.h"
#include "Activity.h"



class ActivityRepository :public Repository<Activity> {
public:
	Activity* findByLocation(Room* Location);
	Activity* findByOwner(Person* Owner);

};
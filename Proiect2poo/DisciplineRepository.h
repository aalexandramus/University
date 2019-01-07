#pragma once

#include "Discipline.h"
#include "Repository.h"
#include <vector>

class DisciplineRepository : public Repository<Discipline>
{
public:
	Discipline* findBySubject(std::string name);
	Discipline* findByType(std::string type);


};


#pragma once
#include "Repository.h"
#include "Person.h"


class PersonRepository :public Repository<Person> {

public:
	Person* findByFullName(std::string FirstName, std::string LastNmae);
	Person* findByCnp(std::string CNP);

};

#pragma once
#include "Role.h"


class AdministrativeRole : public Role
{
public:
	AdministrativeRole() : Role(ADMINISTRATIVE_ROLE) {};
};
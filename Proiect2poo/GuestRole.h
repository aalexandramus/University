#pragma once
#include "Role.h"
class GuestRole : public Role {
	GuestRole() :Role(GUEST_ROLE) {};
};
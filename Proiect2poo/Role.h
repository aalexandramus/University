#pragma once
#include <string>
class Role {
public:
	enum RoleType {
		STUDENT_ROLE, //=0 (da valoare)
		TEACHER_ROLE, //=1
		GUEST_ROLE,
		ADMINISTRATIVE_ROLE
	};
	Role(RoleType type);
protected:
	RoleType mType;

};

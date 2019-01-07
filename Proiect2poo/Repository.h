#pragma once

#include <vector>

template <class T>

class Repository {
protected:
	std::vector<T*> mThings;
public:
	void add(T* object);
	void remove(T* object);
	void print();
};
#include "pch.h"
#include "Repository.h"

template <class T>

void Repository<T>::add(T* object) {
	mThings.push_back(object);
}

template <class T>
void Repository<T>::remove(T* object) {
	for (unsigned i = 0; i < mThings.size(); i++)
		if (mThings.at(i) == object)
			mThings.erase(mThings.begin() + i);
}

template <class T>
void Repository<T>::print() {
	for (unsigned i = 0; i < mThings.size(); i++)
		std::cout << mThings.at(i) << " ";
	std::cout << '\n';
}


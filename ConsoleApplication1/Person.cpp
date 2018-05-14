#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Person::Person(string first, string last, int someNumber) 
	: firstName(first), lastName(last), someNumber(someNumber)
{
}

Person::Person() : someNumber(0) 
{
	cout << "constructing" << endl;
};

Person::~Person()
{
	cout << "destructing" << endl;
};

std::string Person::getName() {
	return firstName + " " + lastName;
};

bool Person::operator<(Person const& p) const
{
	return someNumber < p.someNumber;
};

bool Person::operator<(int i) const
{
	return someNumber < i;
};

bool operator<(int i, Person const& p)
{
	return i < p.someNumber;
}
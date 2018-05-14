#pragma once
#include <string>

class Person
{
private:
	std::string firstName;
	std::string lastName;
	int someNumber;

	friend bool operator<(int i, Person const& p);

public:
	Person(std::string first, std::string last, int someNumber);
	Person();
	~Person();
	std::string getName();
	int GetNumber() const {return someNumber;}
	void SetNumber(int number) {someNumber = number;}
	bool operator<(Person const& p) const;
	bool operator<(int i) const;
};


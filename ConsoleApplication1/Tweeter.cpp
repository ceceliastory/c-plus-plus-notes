#include "Tweeter.h"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

Tweeter::Tweeter(string first,
	string last,
	int someNumber,
	string handle)
	:
	Person(first, last, someNumber),
	twitterHandle(handle)
{
	cout << "constructing tweeter " << twitterHandle << endl;
};

Tweeter::~Tweeter()
{
	cout << "destructing! " << twitterHandle << endl;
}
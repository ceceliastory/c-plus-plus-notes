#include <iostream>
//#include "Person.h"
#include "Tweeter.h"
#include "Status.h"
#include "BankAccount.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	BankAccount b1(30);
	Person p1("Hi", "anna", 3);
	{
		Tweeter t1("some", "erson", 2, "cool");
	}
	Person p2;
	std::string name = p1.getName();

	FileError e = FileError::notfound;

	int x, y;
	cout << "pick two numbers";
	cin >> x >> y;

	if (x > y)
	{
		cout << "x > y";
	}
	else 
	{
		cout << "y > x";
	}

	for(int t = 3; t < 5; t++) {
		cout << t << endl;
	}

    return 0;
}


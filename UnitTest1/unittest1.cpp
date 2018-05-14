#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/BankAccount.h"
#include "../ConsoleApplication1/BankAccount.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(LessThan)
		{
			BankAccount b1(20);
			BankAccount b2(30);
		
			Assert::IsTrue(b1<b2);
		}
	};
}
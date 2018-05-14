#include "stdafx.h"
#include "../ConsoleApplication1/Accum.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using std::string;

namespace UnitTest1
{
	TEST_CLASS(AccumTest)
	{
	public:

		TEST_METHOD(ShouldAccumulateIntegers)
		{
			Accum<int> ints(0);
			ints += 1;
			ints += 3;

			Assert::AreEqual(4, ints.GetTotal());
		}

		TEST_METHOD(ShouldAccumulateStrings)
		{
			Accum<string> strings("");
			strings += "hi ";
			strings += "there";

			string expected = "hi there";
			Assert::AreEqual(expected, strings.GetTotal());
		}
	};
}
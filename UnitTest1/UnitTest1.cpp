#include "pch.h"
#include "CppUnitTest.h"
#include "/Users/User/source/repos/lab5.1/Lab5.1/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = h(1, 0.);
			Assert::AreEqual(c, 0.5);

		}
	};
}

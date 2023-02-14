#include "pch.h"
#include "CppUnitTest.h"
#include "/Users/User/source/repos/lab5.2/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod_A)
		{
			double a = 1;
			A(6, 1, a);
			Assert::AreEqual(a, -6.);
		
		}
		TEST_METHOD(TestMethod_S)
		{
			int n = 2;
			double s = 1;
			S(0, 0.001, n, s);
			Assert::AreEqual(s, 1.);

		}
	};
}

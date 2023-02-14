#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\lab5.4\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodS0)
		{
			double test_S0 = S0(1, 2);
			Assert::AreEqual(test_S0, 0,540302);
		}
		
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\lab5.3\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod_z)
		{
			double test_z = z(0.01);
			Assert::AreEqual(test_z,17,5144);
		}
	};
}

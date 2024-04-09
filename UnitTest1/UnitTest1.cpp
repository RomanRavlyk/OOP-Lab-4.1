#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 4.1/Employee.h"
#include "..//OOP Lab 4.1/Hourly worker.h"
#include "..//OOP Lab 4.1/Hourly worker.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Hourly_employed emp(10);
			Assert::AreEqual(10, emp.getExp());
		}
	};
}

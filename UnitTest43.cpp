#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab4.3/Array.cpp"
#include "../OOP Lab4.3/Hex.cpp"
#include "../OOP Lab4.3/Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest43
{
	TEST_CLASS(UnitTest43)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array A(3);
			Assert::AreEqual(A.getSize(), 3);
		}
	};
}

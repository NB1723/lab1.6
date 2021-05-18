#include "pch.h"
#include "CppUnitTest.h"
#include "../Lorry.h"
#include "../Lorry.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Lorry::Car c;
			c.Init("Ford", 2, 170);
			int cylinder = c.getCylinder();
			Assert::AreEqual(cylinder, 2);

		}
	};
}
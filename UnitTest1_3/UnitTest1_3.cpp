#include "pch.h"
#include "CppUnitTest.h"
#include "../oop1.3/Money.h"
#include "D:\Student\oop1.3\oop1.3\Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money money;
			bool t;
			t = money.Init(1000, 500, 200, 100, 50, 20, 10, 5, 2, 5, 50, 10);
			Assert::AreEqual(t, true);
		}
	};
}
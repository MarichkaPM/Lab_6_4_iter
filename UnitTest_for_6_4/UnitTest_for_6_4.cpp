#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna 6_4/Lab 6_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfor64
{
	TEST_CLASS(UnitTestfor64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = 0;
			double arr[7] = { 1.3, 5.6, -1.2, -7.8, 1.8, 2.9, -3.5 };
			double dobutok = 1;
			t = Dobutok(arr, 7, 0, dobutok);
			Assert::AreEqual(38.0016, t, 0.0001);
		}
	};
}

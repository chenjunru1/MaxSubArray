#include "pch.h"
#include "CppUnitTest.h"
#include "../最大子段和/test.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MaxArrayTest
{
	TEST_CLASS(MaxArrayTest)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int l = 6, arr[6] = { -2,11,-4,13,-5,-2 };
			Assert::AreEqual(20, maxsub(arr, l));
		}

		TEST_METHOD(TestMethod2)
		{
			int l = 6, arr[6] = { -2,-3,-6,-7,-5,-4 };
			Assert::AreEqual(0, maxsub(arr, l));
		}
		
		TEST_METHOD(TestMethod3)
		{
			int l = 0, arr[6] = { 1,5,8,-6,-5,9 };
			Assert::AreEqual(0, maxsub(arr, l));
		}

	};
}

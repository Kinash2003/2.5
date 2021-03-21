#include "pch.h"
#include "CppUnitTest.h"
#include "../2.5/Date.h"
#include "../2.5/Date.cpp"
#include "../2.5/Triad.h"
#include "../2.5/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest25
{
	TEST_CLASS(UnitTest25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad a(5,5,8), b(7, 5,3);
			Assert::AreEqual(a < b, true);
		}
	};
}

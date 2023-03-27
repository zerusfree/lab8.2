#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.2.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char t[20] = "lkdld dwadpw adksc";
			bool j = AvailabilityOfAwords(t);
			Assert::AreEqual(j, true);
		}
	};
}

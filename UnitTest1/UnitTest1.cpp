#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1.2/Lab_8.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			char str[101]=",--,--,,,-asda--,-,";
			char str2[16] = "*-*-,,*asda--*,";
			char* dest = new char[16];
			dest = Change(str);
			for (int i = 0; i < 15; i++)
			{
				Assert::AreEqual(dest[i], str2[i]);
			}
		}
	};
}

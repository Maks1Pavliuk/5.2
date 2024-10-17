#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../5.2/Source.cpp"
extern void S(const double x, const double eps, int& n, double& s);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int n = 0;
			double s = 0;
			double x = 0.5;  
			double eps = 0.0001;  

			S(x, eps, n, s);
			
			double expected = atanh(x);
			
			Assert::AreEqual(expected, s, 0.0001);
		}
	};
}
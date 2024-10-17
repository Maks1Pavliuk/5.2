#include "pch.h"
#include "CppUnitTest.h"
#include "cmath"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

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

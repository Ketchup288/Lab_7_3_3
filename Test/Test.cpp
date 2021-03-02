#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7_3_3/lab_7_3_3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a[3][3] = { {1, 2, 3},	   // 0 
							{4, 5, 6},	   // 1
							{7, 8, 9} }; // 2
			int* pa[3] = { a[0], a[1], a[2] };

			int** b = new int* [3];
			for (int rowNo = 0; rowNo < 3; rowNo++)
				b[rowNo] = new int[3];

			int z[3][3] = { {3, 3, 4}, // 0 
							{4, 5, 5}, // 1
							{6, 6, 7} }; // 2
			int* pz[3] = { z[0], z[1], z[2] };

			Smtd_Matrix(pa, b, 3, 3, 0, 0);

			for (int i = 0; i < 3; i++)
				for (int j = 0; j < 3; j++)
					Assert::AreEqual(b[i][j], z[i][j]);

		}
	};
}

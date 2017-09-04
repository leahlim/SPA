#include "stdafx.h"
#include "CppUnitTest.h"
#include "TNode.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTesting
{		
	TEST_CLASS(PKB)
	{
	public:
		
		TEST_METHOD(Trivial)
		{
			Assert::AreEqual(1, 1);
		}

	};
}
#include "pch.h"
#include "CppUnitTest.h"
#include "..\Guess.h"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;


namespace UnitTest
{
	[TestClass]
	public ref class UnitTest
	{
	private:
		TestContext^ testContextInstance;

	public:
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};


#pragma endregion

		[TestMethod]
		void TestMethodSet()
		{
			Guess^ g = gcnew Guess();
			Assert::AreEqual(g->Set(1111), false); //Same numbers
			Assert::AreEqual(g->Set(123), false); //Starts from 0
			Assert::AreEqual(g->Set(1234), true); //True
		};

		[TestMethod]
		void TestMethodBull()
		{
			Guess^ g = gcnew Guess();
			Assert::AreEqual(g->Set(1234), true); //True
			g->TrySet(1234);
			Assert::AreEqual(g->Bull, 4); //4 digits matched
			g->TrySet(1256);
			Assert::AreEqual(g->Bull, 2); //2 digits matched
			g->TrySet(9874);
			Assert::AreEqual(g->Bull, 1); //1 digit matched
		};

		[TestMethod]
		void TestMethodCow()
		{
			Guess^ g = gcnew Guess();
			Assert::AreEqual(g->Set(1234), true); //True
			g->TrySet(4321);
			Assert::AreEqual(g->Cow, 4); //4 digits not matched
			g->TrySet(5621);
			Assert::AreEqual(g->Cow, 2); //2 digits not matched
		};

		[TestMethod]
		void TestMethodHistory()
		{
			Guess^ g = gcnew Guess();
			Assert::AreEqual(g->Set(1234), true); //True
			g->TrySet(4321);
			g->TrySet(5621);
			List<String^>^ expected = gcnew List<String^>();
			expected->Add("4321 Бык = 0 Корова = 4");
			expected->Add("5621 Бык = 0 Корова = 2");

			for (int k = 0; k < g->History->Count; k++)
				Assert::AreEqual(expected[k], g->History[k]);
		};
	};
}

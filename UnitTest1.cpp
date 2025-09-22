#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.1/lab_1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LogicUnitTests
{
    TEST_CLASS(LogicTests)
    {
    public:

        TEST_METHOD(TestCase_TrueFalse)
        {
            LogicResults r = Calculate(true, false);
            Assert::AreEqual(0, (int)r.conj);
            Assert::AreEqual(1, (int)r.disj);
            Assert::AreEqual(1, (int)r.xor_);
            Assert::AreEqual(0, (int)r.impl_pq);
            Assert::AreEqual(1, (int)r.impl_qp);
            Assert::AreEqual(0, (int)r.equiv);
        }

        TEST_METHOD(TestCase_FalseFalse)
        {
            LogicResults r = Calculate(false, false);
            Assert::AreEqual(0, (int)r.conj);
            Assert::AreEqual(0, (int)r.disj);
            Assert::AreEqual(0, (int)r.xor_);
            Assert::AreEqual(1, (int)r.impl_pq);
            Assert::AreEqual(1, (int)r.impl_qp);
            Assert::AreEqual(1, (int)r.equiv);
        }
    };
}
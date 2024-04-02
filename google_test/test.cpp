#include "pch.h"
#include "stl_test.h"

TEST(TestCase_StlTest, Test_none_of_good) {

    // ������������� �������
    int array[3] = { 55, 137, 1 };
    // ���������� ������� �������
    int arraySize = sizeof(array) / sizeof(array[0]);

    bool res = none_of(array, arraySize, isEven);

  EXPECT_TRUE(res);
}

TEST(TestCase_StlTest, Test_none_of_bad) {

    // ������������� �������
    int array[3] = { 56, 138, 2 };
    // ���������� ������� �������
    int arraySize = sizeof(array) / sizeof(array[0]);

    bool res = none_of(array, arraySize, isEven);

    EXPECT_FALSE(res);
}
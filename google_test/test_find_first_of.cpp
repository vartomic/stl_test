#include "pch.h"
#include "stl_test.h"

TEST(TestCase_StlTest, Test_find_first_good) {

    // ������������� 1-�� �������
    int array1[5] = { 0, 2, 3, 25, 5 };
    // ���������� ������� 1-�� �������
    int arraySize1 = sizeof(array1) / sizeof(array1[0]);
    // ������������� 2-�� �������
    int array2[4] = { 19, 10, 3, 4 };
    // ���������� ������� 2-�� �������
    int arraySize2 = sizeof(array2) / sizeof(array2[0]);

    int res = find_first_of(array1, array2, arraySize1, arraySize2);

    EXPECT_EQ(res, 3);
}

TEST(TestCase_StlTest, Test_find_first_bad) {

    // ������������� 1-�� �������
    int array1[5] = { 0, 2, 2, 25, 5 };
    // ���������� ������� 1-�� �������
    int arraySize1 = sizeof(array1) / sizeof(array1[0]);
    // ������������� 2-�� �������
    int array2[4] = { 19, 10, 3, 4 };
    // ���������� ������� 2-�� �������
    int arraySize2 = sizeof(array2) / sizeof(array2[0]);

    int res = find_first_of(array1, array2, arraySize1, arraySize2);

    EXPECT_NE(res, 3);
}
#include <iostream>
#include "stl_test.h"

int main() {
    // ������������� �������
    int array[3] = { 123, -1, 2 };
    // ���������� ������� �������
    int arraySize = sizeof(array) / sizeof(array[0]);

    //bool res1 = all_of(array, arraySize, isPositive);
    //bool res2 = none_of(array, arraySize, isNegative);
    //bool res3 = any_of(array, arraySize, isEven);

    //std::cout << count_if(array, arraySize, isEven) << std::endl;

    int array1[5] = { 0, 2, 3, 25, 5 };
    int arraySize1 = sizeof(array1) / sizeof(array1[0]);
    //int array2[4] = { 19, 10, 3, 4 };
    //int arraySize2 = sizeof(array2) / sizeof(array2[0]);

    //std::cout << find_first_of(array1, array2, arraySize1, arraySize2) << std::endl;

    generate(array1, arraySize1, generator);
}


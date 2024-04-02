#include <iostream>
#include "stl_test.h"

int main() {
    // Инициализация массива
    int array[3] = { 123, -1, 2 };
    // Вычисление размера массива
    int arraySize = sizeof(array) / sizeof(array[0]);

    //bool res1 = all_of(array, arraySize, isPositive);
    //bool res2 = none_of(array, arraySize, isNegative);
    //bool res3 = any_of(array, arraySize, isEven);

    //std::cout << count_if(array, arraySize, isEven) << std::endl;

    int array1[32];
    int arraySize1 = sizeof(array1) / sizeof(array1[0]);

    generate(array1, arraySize1, generator);

    int array2[8];
    int arraySize2 = sizeof(array2) / sizeof(array2[0]);

    generate(array2, arraySize2, generator);

    //std::cout << find_first_of(array1, array2, arraySize1, arraySize2) << std::endl;


}


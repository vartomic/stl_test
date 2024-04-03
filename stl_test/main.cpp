#include <iostream>
#include <algorithm>
#include "stl_test.h"

int main() {

    int array1[32];
    int array2[8];

    int* first1 = std::begin(array1);
    int* last1 = std::end(array1);
    int* first2 = std::begin(array2);
    int* last2 = std::end(array2);

    int size1 = std::distance(first1, last1);
    int size2 = std::distance(first2, last2);

    generate(first1, last1, generator);
    generate(first2, last2, generator);

    for (int i = 0; i < size1; i++) {
        std::cout << first1[i] << ' ';
    }
    std::cout << " " << std::endl;

    for (int i = 0; i < size2; i++) {
        std::cout << first2[i] << ' ';
    }
    std::cout << " " << std::endl;

    int* res1 = find_first_of(first1, last1, first2, last2);
    int* res2 = std::find_first_of(first1, last1, first2, last2);



    //for (int i = 0; i < arraySize2; i++) {
    //    std::cout << array2[i] << ' ';
    //}

    //std::cout << " " << std::endl;

    std::cout << find_first_of(first1, last1, first2, last2) << std::endl;


}


#include <iostream>
#include <algorithm>
#include "stl_test.h"

int main() {

    //int array1[32];
    //int array2[8];

    //int* first1 = std::begin(array1);
    //int* last1 = std::end(array1);
    //int* first2 = std::begin(array2);
    //int* last2 = std::end(array2);

    //int size1 = std::distance(first1, last1);
    //int size2 = std::distance(first2, last2);

    //generate(first1, last1, generator);
    //generate(first2, last2, generator);

    //int* res1 = find_first_of(first1, last1, first2, last2);
    //int* res2 = std::find_first_of(first1, last1, first2, last2);

    //std::cout << find_first_of(first1, last1, first2, last2) << std::endl;


    //char array[5] = {'a', 'b', 'c', 'c', 'd'};

    //char* first = std::begin(array);
    //char* last = std::end(array);

    //adjacent_find(first, last);

    char array[] = "abcxcde";

    //std::cout << array << ' ';

    char* pos_x = std::find(std::begin(array), std::end(array), 'x');

    char* newEnd = remove_element(std::begin(array), std::end(array), pos_x);

}


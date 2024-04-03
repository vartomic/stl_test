#include <algorithm>
#include "pch.h"
#include "stl_test.h"

TEST(TestCase_StlTest, Test_find_first_good) {

    int array1[32];
    int array2[8];

    int* first1 = std::begin(array1);
    int* last1 = std::end(array1);
    int* first2 = std::begin(array2);
    int* last2 = std::end(array2);

    for (int i = 0; i < 100; i++) {

        generate(first1, last1, generator);
        generate(first2, last2, generator);

        int size1 = std::distance(first1, last1);
        int size2 = std::distance(first2, last2);

        int* res1 = find_first_of(first1, last1, first2, last2);
        int* res2 = std::find_first_of(first1, last1, first2, last2);

        EXPECT_EQ(res1, res2);
    }    
}
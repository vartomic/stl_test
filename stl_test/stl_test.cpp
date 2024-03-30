// stl_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isPositive(int num) {
    if (num < 0) {
        return false;
    }
}

bool isNegative(int num) {
    if (num > 0) {
        return false;
    }
}

bool isEven(int num) {
    if (num % 2 != 0) {
        return false;
    }
}

bool funcTest(bool userFunc(int par), int val) {
    if (userFunc(val) != true) {
        return false;
    }
}

int main() {
    bool res1 = funcTest(isPositive, 123);
    bool res2 = funcTest(isNegative, -1);
    bool res3 = funcTest(isEven, 2);
}

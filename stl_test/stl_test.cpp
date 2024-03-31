#include <iostream>

bool isPositive(int num) {
    if (num < 0) {
        return false;
    }
    else { return true; }
}

bool isNegative(int num) {
    if (num > 0) {
        return false;
    }
    else { return true; }
}

bool isEven(int num) {
    if (num % 2 != 0) {
        return false;
    }
    else { return true; }
}

bool all_of(int* array, int size, bool userFunc(int val)) {
    for (int i = 0; i < size; i++) {
        if (userFunc(array[i]) != true) {
            return false;
        }
    }
}

int main() {
    int array[3] = { 123, -1, 2 };
    int arraySize = sizeof(array) / sizeof(array[0]);
    bool res1 = all_of(array, arraySize, isPositive);
    //bool res2 = all_of(array, arraySize, isNegative);
    //bool res3 = all_of(array, arraySize, isEven);
}

// stl_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool all_of(int* arr, int num, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] != num) {
            return false;
        }
        else if (arr[i] == num && i == size-1) {
            return true;
        }
    }
}

int main() {
    int arr[3] = { 4, 4, 4};
    int num = 4;
    int size = sizeof(arr) / sizeof(arr[0]);
    all_of(arr, num, size);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

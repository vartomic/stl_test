#include <iostream>
#include "stl_test.h"

// ������� ���������� false, ���� ����������� �� ���� ������� ����� ������ ����, � ���������� true, ���� ����� ������ ����.
bool isPositive(int num) {
    if (num < 0) {
        return false;
    }
    else { return true; }
}
// ������� ���������� false, ���� ����������� �� ���� ������� ����� ������ ����, � ���������� true, ���� ����� ������ ����.
bool isNegative(int num) {
    if (num > 0) {
        return false;
    }
    else { return true; }
}
// ������� ���������� false, ���� ����������� �� ���� ������� ����� �������, � ���������� true, ���� ����� �����.
bool isEven(int num) {
    if (num % 2 != 0) {
        return false;
    }
    else { return true; }
}
// ������� ���������� false, ���� ��� �������� �������, ����������� ��������, �� ������������� ������� ���������������� �������, ����� �������� �� ����, 
// � ���������� true � ������ ���������� ������� ����� ���������� �������.
bool all_of(int* array, int size, bool userFunc(int val)) {
    for (int i = 0; i < size; i++) {
        if (userFunc(array[i]) != true) {
            return false;
        }
    }
    return true;
}
// ������� ���������� false, ���� ��� �������� �������, ����������� ��������, ������������� ������� ���������������� �������, ����� �������� �� ����, 
// � ���������� true � ������ ������������ ������� ����� ���������� �������.
bool none_of(int* array, int size, bool userFunc(int val)) {
    for (int i = 0; i < size; i++) {
        if (userFunc(array[i]) == true) {
            return false;
        }
    }
    return true;
}
// ������� ���������� true, ���� ���� �� ���� ������� �������, ����������� ��������, ������������� ������� ���������������� �������, ����� �������� �� ����, 
// � ���������� false � ������ ������������ ������� ���� �� ����� ��������� �������.
bool any_of(int* array, int size, bool userFunc(int val)) {
    for (int i = 0; i < size; i++) {
        if (userFunc(array[i]) == true) {
            return true;
        }
    }
    return false;
}
// ������� ���������� ���������� ��������� �������, ��������������� ������� ���������������� �������
int count_if(int* array, int size, bool userFunc(int val)) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (userFunc(array[i]) == true) {
            count++;
        }
    }
    return count;
}

int main() {
    // ������������� �������
    int array[3] = { 123, -1, 2 };
    // ���������� ������� �������
    int arraySize = sizeof(array) / sizeof(array[0]);

    //bool res1 = all_of(array, arraySize, isPositive);
    //bool res2 = none_of(array, arraySize, isNegative);
    //bool res3 = any_of(array, arraySize, isEven);

    std::cout << count_if(array, arraySize, isEven) << std::endl;
}

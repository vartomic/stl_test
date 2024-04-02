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

int find_first_of(int* array1, int* array2, int size1, int size2) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (array1[i] != array2[j]) {
                j++;
            }
            else if (array1[i] == array2[j]) {
               return array1[i];
            }
            else if (array1[i] != array2[j] && i == size1) {
                array1[i++];
            }
            else {
                return 0;
            }
        }
    }
}

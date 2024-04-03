#include <random>
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

int* find_first_of(int* first1, int* last1,
    int* first2, int* last2) {

    int size1 = std::distance(first1, last1);
    int size2 = std::distance(first2, last2);

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (first1[i] == first2[j]) {
                //std::cout << first1[i] << std::endl;
                return &first1[i];
            }
        }
    }
    return last1;
}

char* adjacent_find(char* first, char* last) {
    int size = last - first;

    for (int i = 0; i < size; i++) {
        if (first[i] == first[i + 1]) {
            //std::cout << first[i] << std::endl;
            return &first[i];
        }
    }
    return last;
}

int generator() {
    std::random_device rnd;
    std::mt19937 engine(rnd());
    std::uniform_int_distribution<std::mt19937::result_type> uid(1, 100);
    int val = uid(engine);
    return val;
}

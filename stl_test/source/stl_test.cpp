#include <random>
#include <iostream>
#include "stl_test.h"

// Функция возвращает false, если поступившее на вход функции число меньше нуля, и возвращает true, если число больше нуля.
bool isPositive(int num) {
    if (num < 0) {
        return false;
    }
    else { return true; }
}
// Функция возвращает false, если поступившее на вход функции число больше нуля, и возвращает true, если число меньше нуля.
bool isNegative(int num) {
    if (num > 0) {
        return false;
    }
    else { return true; }
}
// Функция возвращает false, если поступившее на вход функции число нечётно, и возвращает true, если число чётно.
bool isEven(int num) {
    if (num % 2 != 0) {
        return false;
    }
    else { return true; }
}
// Функция возвращает false, если все элементы массива, полученного функцией, не соответствуют условию пользовательской функции, также поданной на вход, 
// и возвращает true в случае выполнения условия всеми элементами массива.
bool all_of(int* array, int size, bool userFunc(int val)) {
    for (int i = 0; i < size; i++) {
        if (userFunc(array[i]) != true) {
            return false;
        }
    }
    return true;
}
// Функция возвращает false, если все элементы массива, полученного функцией, соответствуют условию пользовательской функции, также поданной на вход, 
// и возвращает true в случае невыполнения условия всеми элементами массива.
bool none_of(int* array, int size, bool userFunc(int val)) {
    for (int i = 0; i < size; i++) {
        if (userFunc(array[i]) == true) {
            return false;
        }
    }
    return true;
}
// Функция возвращает true, если хотя бы один элемент массива, полученного функцией, соответствует условию пользовательской функции, также поданной на вход, 
// и возвращает false в случае невыполнения условия хотя бы одним элементом массива.
bool any_of(int* array, int size, bool userFunc(int val)) {
    for (int i = 0; i < size; i++) {
        if (userFunc(array[i]) == true) {
            return true;
        }
    }
    return false;
}
// Функция возвращает количество элементов массива, удовлетворяющих условию пользовательской функции
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

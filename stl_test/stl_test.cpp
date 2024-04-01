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

int main() {
    // Инициализация массива
    int array[3] = { 123, -1, 2 };
    // Вычисление размера массива
    int arraySize = sizeof(array) / sizeof(array[0]);

    //bool res1 = all_of(array, arraySize, isPositive);
    //bool res2 = none_of(array, arraySize, isNegative);
    //bool res3 = any_of(array, arraySize, isEven);

    std::cout << count_if(array, arraySize, isEven) << std::endl;
}

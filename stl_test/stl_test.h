#pragma once

bool isPositive(int num);
bool isNegative(int num);
bool isEven(int num);
bool all_of(int* array, int size, bool userFunc(int val));
bool none_of(int* array, int size, bool userFunc(int val));
bool any_of(int* array, int size, bool userFunc(int val));
int count_if(int* array, int size, bool userFunc(int val));
int find_first_of(int* array1, int* array2, int size1, int size2);
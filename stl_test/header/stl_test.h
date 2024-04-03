#pragma once

bool isPositive(int num);
bool isNegative(int num);
bool isEven(int num);
bool all_of(int* array, int size, bool userFunc(int val));
bool none_of(int* array, int size, bool userFunc(int val));
bool any_of(int* array, int size, bool userFunc(int val));
int count_if(int* array, int size, bool userFunc(int val));
int* find_first_of(int* first1, int* last1, int* first2, int* last2);
char* adjacent_find(char* first, char* last);
int generator();
void generate(int* first, int* last, int generator());
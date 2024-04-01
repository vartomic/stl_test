#pragma once

bool all_of(int* array, int size, bool userFunc(int val));
bool none_of(int* array, int size, bool userFunc(int val));
bool any_of(int* array, int size, bool userFunc(int val));
int count_if(int* array, int size, bool userFunc(int val));
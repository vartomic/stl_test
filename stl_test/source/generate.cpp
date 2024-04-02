#include <iostream>
#include "stl_test.h"

void generate(int* array, int size, int generator()) {
	for (int i = 0; i < size; i++) {
		array[i] == generator();	
	}
}
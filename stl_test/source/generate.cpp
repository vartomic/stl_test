#include <iostream>
#include "stl_test.h"

void generate(int* first, int* last, int generator()) {

	int size = std::distance(first, last);

	for (int i = 0; i < size; i++) {
		first[i] = generator();	
	}
}
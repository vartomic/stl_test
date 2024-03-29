void* memchr(const* array, int ch, size_t n);

//
int main() {
	char[] arr = "abcbt";
	int ch = 62;
	size_t n = 5
	auto c = memchr(arr, ch, n);

	if (c == 62) {
		print("PASSED");
	}
	if else (c == NULL) {
		print("FAILED");
	}

	return 0;
}


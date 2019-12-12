
#include <cstdio>
#include <cmath>
int main(int argv, char* argc) {
	int number = 0;
	int arr[8];
	int index = -1;
	int i;
	int a[5] = { 0 };
	int sum = 0;
	int offset = 0;
	scanf_s("%d", &number);
	while (number != 0) {
		index++;
		arr[index] = number % 2;
		number = number / 2;
	}
	for (i = 1; i < index + 2; i++) {
		if (i % 5 == 0) {
			a[offset] = sum;
			offset++;
			sum = arr[i - 1];
		}
		else {
			sum += arr[i - 1] * pow(2, ((i - 1) % 5) + offset);
		}

	}
	a[offset] = sum;
	for (i = offset; i > -1; i--) {
		printf("%d", a[i]);
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int x = 10;
void func(void);

int main(void) {
	func();
	printf("x = %d\n", x);
	{
		int z = 30;
		printf("z = %d\n", z);
	}
	for (int i = 0; i < 10; ++i) {
		printf("i = %d\n", i);
	}
	return EXIT_SUCCESS;
}

void func(void) {
	int x = 5;
	printf("void func(void) { %d\n", x);
}

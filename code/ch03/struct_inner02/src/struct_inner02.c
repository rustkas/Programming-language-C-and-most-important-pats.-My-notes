#include <stdio.h>
#include <stdlib.h>

struct MyStruct {
	int a;
	struct {
		int b;
		int c;
	};
	int d;
};

int main(void) {
	struct MyStruct my = { 1, { 2, 3 }, 4 };
	printf("a = %d\n", my.a);
	printf("b = %d\n", my.b);
	printf("c = %d\n", my.c);
	printf("d = %d\n", my.d);
	return EXIT_SUCCESS;
}

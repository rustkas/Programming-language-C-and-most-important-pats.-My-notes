#include <stdio.h>
#include <stdlib.h>

int main(void) {
	union myUnion {
		int x;
		float y;
		double z;
	} union1;

	union myUnion union2;

	union myUnion union3 = { 10 };

	union myUnion union4 = { .z = 2.5 };

	union1.x = 10;
	printf("%d\n", union1.x); // 10

	struct MyStruct {
		int a;
		union { // Анонимное вложенное объединение
			int b;
			double c;
		};
		int d;
	};

	struct MyStruct my_struct = { 1, { .c = 2.5 }, 4 };
	printf("%d\n", my_struct.a);   // 1
	printf("%.2f\n", my_struct.c); // 2.50
	printf("%d\n", my_struct.d);   // 4

union1.x = 10;
printf("union1.x %d\n", union1.x);
printf("union2.x %p\n", union2);
printf("union3.x %d\n", union3.x);
printf("union4.x %d\n", union4.x);
	return EXIT_SUCCESS;
}

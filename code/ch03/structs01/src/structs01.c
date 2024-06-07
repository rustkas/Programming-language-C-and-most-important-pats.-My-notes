#include <stdio.h>
#include <stdlib.h>

int main(void) {
	{
		struct Point { // Объявление именованной структуры
			int x;
			int y;
		};
		struct Point point = { 10, 20 };
		printf("{%d, %d}", point.x, point.y);
		puts("");
	}

	{
		struct Point { // Объявление именованной структуры
			int x;
			int y;
		};
		struct Point point = { .y = 10, .x = 20 };
		printf("{%d, %d}", point.x, point.y);
		puts("");
		printf("Size of struct Point in bytes is %d\n", (int) sizeof(point));
		printf("Size of struct Point in bytes is %d\n", (int) sizeof(struct Point));
	}
	return EXIT_SUCCESS;
}

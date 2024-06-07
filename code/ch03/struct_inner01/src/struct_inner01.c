#include <stdio.h>
#include <stdlib.h>

struct Point { // Объявление именованной структуры
   int x;
   int y;
};
struct {       // Объявление структуры без названия
   struct Point top_left;
   struct Point bottom_right;
} rect = { {10, 20}, {30, 40} }, rect2 = { {10, 20}, {30, 40} };


int main(void) {
	printf("rect.top_left.x = %d\n", rect.top_left.x);      // 0
	   printf("rect.top_left.y = %d\n", rect.top_left.y);      // 0
	   printf("rect.bottom_right.x = %d\n", rect.bottom_right.x);  // 100
	   printf("rect.bottom_right.y = %d\n", rect.bottom_right.y);  // 100
	   printf("%d\n", rect2.top_left.x);     // 10
	   printf("%d\n", rect2.top_left.y);     // 20
	   printf("%d\n", rect2.bottom_right.x); // 30
	   printf("%d\n", rect2.bottom_right.y); // 40
	   printf("Size of rect is %d byte \n", (int) sizeof rect);    // 16

	return EXIT_SUCCESS;
}

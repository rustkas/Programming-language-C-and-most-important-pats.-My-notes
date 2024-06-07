/*
 ============================================================================
 Name        : struct_link01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Point {      // Объявление структуры и переменной
   int x;
   int y;
} point1;

int main(void) {
   struct Point *p = &point1; // Объявление указателя
   p->x = 10;
   p->y = 20;
   printf("%d\n", p->x);     // 10
   printf("%d\n", p->y);     // 20
   printf("%d\n", (*p).x);   // 10
   printf("%d\n", (*p).y);   // 20

	return EXIT_SUCCESS;
}

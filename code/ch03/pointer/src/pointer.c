#include <stdio.h>
#include <stdlib.h>

int main(void) {
	{
		int *p = NULL;
		printf("NULL = %p\n", p);
		printf("Size of pointer is %d bytes\n", (int) sizeof(p));

	}
	{
		int *p, x;
		p = NULL;
		x = 0;
		printf("Size of pointer is %d bytes (%d)\n", (int) sizeof(p), x);
	}
	{
		int *p = NULL, x = 10;
		p = &x;
		printf("pointer to x = %p\n", p);
		printf("pointer to x = %p\n", &x);

		*p = *p + 20;
		printf("x = %d\n", *p);
	}
	{
		puts("set value one pointer to an other pointer");
		int *p1 = NULL, *p2 = NULL, x = 10;
		p1 = &x;
		p2 = p1;
		printf("p2 value = %d\n", *p2);
		*p2 = 40;
		printf("p1 value = %d\n", *p1);
		printf("x = %d\n", x);
	}

	{
		int **p = NULL;
		printf("x = %p\n", p);
	}
	{
		int *p1 = NULL, **p2 = NULL, х = 10;
		p1 = &х;
		p2 = &p1; // Указатель на указатель
		printf("Указатель на указатель = %d\n", **p2); // 10
		**p2 = 40; // Изменение значения в переменной х
		printf("*p1 = %d\n", *p1); // 40
		printf("x = %d\n", х); // 40

	}
	{
		puts("Указатель на указатель ***p3");
		int *p1 = NULL, **p2 = NULL, ***p3 = NULL, х = 10;
		p1 = &х;
		p2 = &p1; // Указатель на указатель
		p3 = &p2;
		printf("Указатель на указатель = %d\n", ***p3); // 10
		***p3 = 40; // Изменение значения в переменной х
		printf("*p1 = %d\n", *p1); // 40
		printf("x = %d\n", х); // 40

	}

	{
		puts("Массив указателей из трех элементов");
		int *p[3]; // Массив указателей из трех элементов
		int x = 10, y = 20, z = 30;
		p[0] = &x;
		p[1] = &y;
		p[2] = &z;
		printf("x = %d\n", *p[0]);
		printf("y = %d\n", *p[1]);
		printf("z = %d\n", *p[2]);

	}
	{
		puts("Массив указателей на строки");
		const char *str[] = { "String1", "String2", "String3" };
		printf("%s\n", str[0]);
		printf("%s\n", str[1]);
		printf("%s\n", str[2]);
	}
	{
		const short ARR_SIZE = 3;
		int *p = NULL;
		int arr[3] = { 10, 20, 30 };

		p = arr; // Инициализируем указатель адресом массива

		for (int i = 0; i < ARR_SIZE; ++i) {
			printf("%d\n", *p);
			++p;
		}
		p = arr;
	}
	{
		const short ARR_SIZE = 3;
		int *p = NULL;
		int arr[3] = { 10, 20, 30 };

		p = arr; // Инициализируем указатель адресом массива

		for (int i = 0; i < ARR_SIZE; ++i) {
			printf("%d\n", *p++);
		}
		p = arr;
	}
	{
		puts("Get access ti a value of an array");
		int arr[3] = { 10, 20, 30 };
		printf("%d\n", arr[1]);
		printf("%d\n", *(arr + 1));
		printf("%d\n", *(1 + arr));
		printf("%d\n", 2[arr]);

	}

	{
//		char *str = "String";
//		char * const p = str;
//
//		char str1[] = "String";
//		char str2[] = "New";
//		p = str1;
//		printf("*p = %s\n", *p);
//		p = str2;
//		printf("*p = %s\n", *p);

//		char *const p = str;
//		const char *const p = str;

	}

	{




	}
	return EXIT_SUCCESS;
}

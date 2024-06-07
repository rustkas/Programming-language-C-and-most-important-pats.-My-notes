#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian_Russia.1251");

	{
		puts("");
		const unsigned int ARR_SIZE = 10;
		int *p = malloc(ARR_SIZE * sizeof(int));
		if (!p) {
			puts("Не удалось выделить память");
			exit(1);
		}

		for (int i = 0; i < ARR_SIZE; ++i) {
			p[i] = i + 1;
		}
		for (int i = 0; i < ARR_SIZE; ++i) {
			printf("Current value is %d\n", p[i]);
		}
		free(p);
		p = NULL;
	}
	{
		puts("");
		const unsigned int ARR_SIZE = 10;
		int *p = calloc(ARR_SIZE, sizeof(int));
		if (!p) {
			puts("Не удалось выделить память");
			exit(1);
		}

		for (int i = 0; i < ARR_SIZE; ++i) {
			p[i] = i + 1;
		}
		for (int i = 0; i < ARR_SIZE; ++i) {
			printf("Current value is %d\n", p[i]);
		}
		free(p);
		p = NULL;
	}
	return EXIT_SUCCESS;
}

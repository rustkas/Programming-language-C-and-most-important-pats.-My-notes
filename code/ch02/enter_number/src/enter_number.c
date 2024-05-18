#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian_Russia.1251");
	int x = 0;
	printf("Введите число: ");
	fflush(stdin);
	fflush(stdout);
	int status = scanf("%d", &x);
	if (status == 1) {
		printf("Вы ввели: %d\n", x);
	} else {
		puts("Ошибка при вводе числа");
	}

	printf("status = %d\n", status);
	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian_Russia.1251");
	int x = 0, y = 0;
	printf("Введите первое число: ");
	fflush(stdin);
	fflush(stdout);

	if (1 != scanf("%d", &x)) {
		puts("Вы ввели не число");
		return EXIT_FAILURE;
	}

	printf("Введите второе число: ");
	fflush(stdin);
	fflush(stdout);

	if (1 != scanf("%d", &y)) {
		puts("Вы ввели не число");
		return EXIT_FAILURE;
	}

	printf("Сумма = %d\n", x + y);
	return EXIT_SUCCESS;
}

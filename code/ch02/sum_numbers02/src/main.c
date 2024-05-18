#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Russian_Russia.1251");
	int x = 0, y = 0, flag = 0, count = 1;
	do {
		printf("Введите первое число: ");
		fflush(stdin);
		fflush(stdout);

		if (1 != scanf("%d", &x)) {
			puts("Вы ввели не число");
			if (feof(stdin) || ferror(stdin)) {
				clearerr(stdin);
			}
			int ch = 0;
			while ((ch = getchar()) != '\n' && ch != EOF)
				;
			++count;
			if (count > 3) {
				puts("Вы сделали три ошибки");
			}
			return EXIT_FAILURE;
		} else {
			flag = 1;
		}
	} while (!flag);

	flag = 0;
	count = 1;
	do {
		printf("Введите первое число: ");
		fflush(stdin);
		fflush(stdout);

		if (1 != scanf("%d", &x)) {
			puts("Вы ввели не число");
			if (feof(stdin) || ferror(stdin)) {
				clearerr(stdin);
			}
			int ch = 0;
			while ((ch = getchar()) != '\n' && ch != EOF)
				;
			++count;
			if (count > 3) {
				puts("Вы сделали три ошибки");
			}
			return EXIT_FAILURE;
		} else {
			flag = 1;
		}
	} while (!flag);

	printf("Сумма = %d\n", x + y);
	return EXIT_SUCCESS;
}

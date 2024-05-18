#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	//system("chcp 2151");
	setlocale(LC_ALL, "Russian_Russia.1251");
	char str[256] ="";
	printf("Введите строку: ");
	fflush(stdin);
	fflush(stdout);
	int status = scanf("%255s", str);
	if (status == 1) {
		printf("Вы ввели: %s\n", str);
	} else {
		puts("Ошибка при вводе строки");
	}

	printf("status = %d\n", status);
	return EXIT_SUCCESS;
}

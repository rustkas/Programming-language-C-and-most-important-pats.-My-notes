#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main(void) {

	setlocale(LC_ALL, "Russian_Russia.1251");
	char buf[256] = "", *p = NULL;

	printf("Введите строку: ");
	fflush(stdin);
	fflush(stdout);
	p = fgets(buf, 256, stdin);
	if (p) {
		size_t len = strlen(buf);
		if (len != 0 && buf[len - 1] == '\n') {
			buf[len - 1] = '\0';
		}
		printf("Вы ввели: %s\n", buf);
	} else {
		puts("Возникла ошибка");
	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const unsigned int ROWS = 2;    // Количество строк
	const unsigned int COLUMNS = 4; // Количество столбцов
	unsigned int i = 0, j = 0;
	int *p = calloc(ROWS * COLUMNS, sizeof(int));
	if (!p)
		exit(1);                // Выходим при ошибке
	// Нумеруем элементы массива
	int n = 1;
	for (i = 0; i < ROWS; ++i) {
		for (j = 0; j < COLUMNS; ++j) {
			*(p + i * COLUMNS + j) = n++;
		}
	}
	// Выводим значения
	for (i = 0; i < ROWS; ++i) {
		for (j = 0; j < COLUMNS; ++j) {
			printf("%3d", *(p + i * COLUMNS + j));
		}
		puts("");
	}
	free(p);                             // Освобождаем память
	p = NULL;                            // Обнуляем указатель

	return EXIT_SUCCESS;
}

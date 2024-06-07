#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const unsigned int ROWS = 2;    // Количество строк
	const unsigned int COLUMNS = 4; // Количество столбцов

	// Создаем массив указателей
	int **p = calloc(ROWS, sizeof(int*));
	if (!p)
		exit(1);                // Выходим при ошибке
	// Добавляем строки
	for (int i = 0; i < ROWS; ++i) {
		p[i] = calloc(COLUMNS, sizeof(int));
		if (!p[i])
			exit(1);          // Выходим при ошибке
	}
	// Нумеруем элементы массива
	int n = 1;
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLUMNS; ++j) {
			p[i][j] = n++;
			// *(*(p + i) + j) = n++;
		}
	}
	// Выводим значения
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLUMNS; ++j) {
			printf("%3d", p[i][j]);
			// printf("%3d", *(*(p + i) + j));
		}
		printf("\n");
	}
	// Освобождаем память
	for (int i = 0; i < ROWS; ++i) {
		free(p[i]);
	}
	free(p);
	p = NULL;

	return EXIT_SUCCESS;
}

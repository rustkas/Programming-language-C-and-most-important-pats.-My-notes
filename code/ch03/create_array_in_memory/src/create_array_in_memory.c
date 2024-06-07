/*
 ============================================================================
 Name        : create_array_in_memory.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define ROWS 2
#define COLUMNS  4

int main(void) {
//	const unsigned int ROWS = 2;
//	const unsigned int COLUMNS = 4;

	// Создаем массив указателей
	int **arr = calloc(ROWS, sizeof(int*));
	if (!arr) {
		exit(1);  // Выходим при ошибке
	}

	// Добавляем строки
	for (int i = 0; i < ROWS; ++i) {
		arr[i] = calloc(COLUMNS, sizeof(int));
		if (!arr[i]) {
			exit(1);  // Выходим при ошибке
		}
	}

	// Инициализация массива
	int values[ROWS][COLUMNS] = { { 10, 20, 30, 40 }, { 50, 60, 70, 80 } };

	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLUMNS; ++j) {
			arr[i][j] = values[i][j];
		}
	}

	// Выводим значения
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLUMNS; ++j) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	// Освобождаем память для строк
	for (int i = 0; i < ROWS; ++i) {
		free(arr[i]);
	}
	// Освобождаем память для массива указателей
	free(arr);
	return EXIT_SUCCESS;
}

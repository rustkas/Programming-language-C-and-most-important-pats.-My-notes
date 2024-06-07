#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLUMNS 4

int main(void) {
	{
		int arr[ROWS][COLUMNS] = { { 10, 20, 30, 40 }, { 50, 60, 70, 80 } };

		for (int i = 0; i < ROWS; ++i) {
			for (int j = 0; j < COLUMNS; ++j) {
				printf("%3d ", arr[i][j]);
			}
			printf("\n");
		}
	}


	return EXIT_SUCCESS;
}

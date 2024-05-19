#include <stdio.h>
#include <stdlib.h>

int main(void) {
	{
		short arr[3] = { 10, 20, 30 };
		arr[0] = 9;
		arr[1] = 4;
		printf("array = [");
		for (int i = 0; i < 3; ++i) {
			if (i != 2) {
				printf("%d, ", arr[i]);
			} else {
				printf("%d", arr[i]);
			}

		}
		printf("]");
	}
	{
		puts("");
		short arr[3] = { 10, 20, 30 };
		arr[0] = 9;
		arr[1] = 4;
		printf("array = [");
		for (int i = 0; i < 3; ++i) {
			if (i != 2) {
				printf("%p, ", &arr[i]);
			} else {
				printf("%p", &arr[i]);
			}

		}
		printf("]");
	}
	{
		puts("");
		int arr[2][4] // Две строки из 4-х элементов каждая
		= { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };
		for (int i = 0, j =0; i < 2; ++i) {
			for (j = 0; j <4; ++j) {
				printf("%3d", arr[i][j]);
			}
		}
	}
	return EXIT_SUCCESS;
}

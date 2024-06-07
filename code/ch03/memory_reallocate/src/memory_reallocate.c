#include <stdio.h>
#include <stdlib.h>

int main(void) {
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned int arr_size = 5;
    int *p = malloc(arr_size * sizeof(int));
    if (!p) {
        exit(1);  // Выходим при ошибке
    }

    // Нумеруем элементы массива
    for (int i = 0; i < arr_size; ++i) {
        p[i] = i + 1;
    }

    // Увеличиваем количество элементов
    arr_size += 2;
    int *temp = realloc(p, arr_size * sizeof(int));
    if (!temp) {
        free(p);  // Освобождаем старую память перед выходом
        exit(1);  // Выходим при ошибке
    }
    p = temp;

    // Инициализируем новые элементы
    p[5] = 55;
    p[6] = 66;

    // Выводим значения
    for (int i = 0; i < arr_size; ++i) {
        printf("%d ", p[i]);
    }
    printf("\n");

    free(p);  // Освобождаем память
    p = NULL; // Обнуляем указатель

    return EXIT_SUCCESS;
}


	return EXIT_SUCCESS;
}

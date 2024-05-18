// Включение заголовочных файлов
#include <stdio.h>
#include <stdlib.h>

// Объявление глобальных переменных
int x = 21;
int у = 85;

// Объявление функций и др.
int surn(int, int);
void print(int);

// Главная функция (точка входа в программу)
int main(void) {
	int z; // Объявление локальной переменной
	z = surn(x, у); // Вызов функции surn()
	print(z); // Вызов функции print ()
	return EXIT_SUCCESS;
}

// Определения функций
int surn(int х, int у) {
	return х + у;
}
void print(int х) {
	printf("%d", х);
}

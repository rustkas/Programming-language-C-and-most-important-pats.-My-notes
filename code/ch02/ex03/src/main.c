// Включение заголовочных файлов
#include "HelloWorld.h"

// Объявление глобальных переменных
int x = 21;
int у = 85;

// Главная функция (точка входа в программу)
int main(void) {
	int z; // Объявление локальной переменной
	z = surn(x, у); // Вызов функции surn)
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

/*
 ============================================================================
 Name        : ex05_print.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	putchar('w'); //w
	printf("\n");

	putchar(119); //w
	printf("\n");

	puts("String1"); // String1
	printf("\n");

	puts("String2"); // String2
	printf("\n");

	printf("String\n");
	printf("Count %d\n", 10);
	printf("%s %d\n", "Count", 10);

	_locale_t locale = _create_locale(LC_NUMERIC, "dutch");
	printf("%.2f\n", 2.5);	// 2.50
	_printf_l("%.2f\n", locale, 2.5);	// 2,50
	setlocale(LC_NUMERIC, "dutch");
	printf("%.2f\n", 2.5);	// 2,50
	_free_locale(locale);

	// %[<Флаги>] [<Ширина>] [.<Точность>] [<Размер>]<Тиn>

	//символ
	printf("%c", 'w');
	printf("\n");
	printf("%c", 119);
	printf("\n");

	// строка
	printf("%s", "String");
	printf("\n");

	//  d или i -десятичное целое число со знаком:
	printf("%d %i", 10, 30);	// 10 30
	printf("\n");
	printf("%d %i", -10, -30);	// -10 -30
	printf("\n");

	// u -десятичное целое число без знака:
	printf("%u", 10); // 10
	printf("\n");
	// o -восьмеричное число без знака:
	printf("%o %o", 10, 077); // 12 77
	printf("\n");
	printf("%#o %#o", 10, 077); // 012 077
	printf("\n");

	// х - шестнадцатеричное число без знака в нижнем регистре:
	printf("%x %x", 10, 0xff); // а ff
	printf("\n");
	printf("%#x %#x", 10, 0xff); // Оха Oxff
	printf("\n");

	// х - шестнадцатеричное число без знака в верхнем регистре:
	printf("%X %X", 10, 0xff); // 0xА 0xff
	printf("\n");
	printf("%#X %#X", 0XA, 0XFF); // ОХА OXFF
	printf("\n");

	// f -вещественное число в десятичном представлении:
	printf("%f %f", 18.65781452, 12.5); // 18.657815 12.500000
	printf("\n");
	printf("%f", -18.65781452); // -18.657815
	printf("\n");
	printf("%#.0f %.0f", 100.0, 100.0); // 100. 100
	printf("\n");

	// е - вещественное число в экспоненциальной форме (буква "е" в нижнем регистре):
	printf("%e", 18657.81452); // 1.865781е+ОО4
	printf("\n");
	printf("%e", 0.000081452); // 8.145200е-005
	printf("\n");

	// Е - вещественное число в экспоненциальной форме (буква "е" в верхнем регистре ):
	printf("%E", 18657.81452); // 1.865781Е+004
	printf("\n");

	// g-эквивалентно f или е (выбирается более короткая запись числа):
	printf("%g %g %g", 0.086578, 0.000086578, 1.865E-005);
	printf("\n");
	// 0.086578 8.6578е-005 1.865е-005

	// G -эквивалентно f или Е (выбирается более короткая запись числа):
	printf("%G %G %G", 0.086578, 0.000086578, 1.865E-005);
	printf("\n");
	// 0.086578 8.6578Е-005 1.865Е-005
	// р - вывод адреса переменной:
	int х = 10;
	printf("%p", &х);
	printf("\n");

	// Значение в проекте Test32c: 0028FF2C
	// Значение в проекте Test64c: 000000000023FE4C
	// % -символ процента ( % ):

	printf("10%%"); // 10%
	printf("\n");

	printf("%3s", "string");
	printf("\n");
	printf("%10s", "string");
	printf("\n");

	printf("%10d", 25);
	printf("\n");
	printf("%10f", 12.5);
	printf("\n");

	printf("%10.5f", 3.14159265359);
	printf("\n");
	printf("%.3f", 3.14159265359);
	printf("\n");

	printf("%7d", 100); // '     100'
	printf("\n");
	printf("%.7d", 100); // '0000100'
	printf("\n");
	printf("%.7d", 123456789); // '1234456789'
	printf("\n");

	printf("%.7s", "Hello, world!"); // 'Hello, '
	printf("\n");
	printf("%5.7s", "Hello, world!"); // 'Hello, '
	printf("\n");
	printf("%50.7s", "Hello, world!"); // '                                           Hello, '
	printf("\n");
	printf("%15.20s", "Hello, world!"); // '                                           Hello, '
	printf("\n");

	printf("'%*.*f'", 10, 5, 3.14159265359);
	printf("\n");
	printf("'%*f'", 3, 3.14159265359);
	printf("\n");
	printf("'%*s'", 10, "string");
	printf("\n");

	// Флаги
	printf("%#o %#o", 10, 077); //012 077
	printf("\n");

	printf("%#x %#x", 10, 0xff); //0xa 0xff
	printf("\n");

	printf("%#X %#X", 10, 0xff); //0XA 0XFF
	printf("\n");

	printf("%#.0f %.0f", 100.0, 100.0); // 100 100
	printf("\n");

	printf("'%7d'", 100); //
	printf("\n");
	printf("'%07d'", 100); //
	printf("\n");

	printf("'%5d' '%-5d'", 3, 3); // '    3' '3    '
	printf("\n");

	printf("'% d' '% d'", -3, 3); // '-3' ' 3'
	printf("\n");

	printf("'%+d' '%+d'", -3, 3); // '-3' '+3'
	printf("\n");

	// Размер

	{
		short int х = 32767;
		printf("%hd", х); // 32767
		printf("\n");
		unsigned short int у = 65535;
		printf("%hu", у); // 65535
		printf("\n");
	}
	{
		short int х = 32767;
		printf("%d", х); // 32767
		printf("\n");
		unsigned short int у = 65535;
		printf("%u", у); // 65535
		printf("\n");
	}

	{
		long int х = 2147483647L;
		printf("%ld", х); // 2147483647
		printf("\n");
	}

	{
		wchar_t str[] = L"string";
		printf("%ls", str); // string
		printf("\n");
	}

	{
		long long х = 9223372036854775807LL;
//		printf("%I64d", х); // 9223372036854775807
		printf("%lld", х);
		printf("\n");
		unsigned long long y = 18446744073709551615ULL;
//		printf("%I64u", y); // 18446744073709551615
		printf("%llu", y);

	}
	{
1
	}
	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

int main(void) {
	{
		printf(" boolean:\n\r");
		_Bool is_int = 1;
		printf("true = %d\n", is_int); // 1
		printf("false = %d\n", !is_int); // О
		// Выводим размер в байтах
		printf("size = %d\n", (int) sizeof(_Bool)); // 1
	}
	{
		bool is_int = true;
		printf("using <stdbool.h>\n");
		printf("true = %d\n", is_int);
		is_int = false;
		printf("false = %d\n", is_int);
	}

	{
		printf("\n\r char:\n\r");
		char ch = 'w';
		// Выводим символ
		printf("char = %c\n", ch);
		// Выводим код символа
		printf("code of char = %d\n", ch);
		// Выводим размер в байтах
		printf("size of char = %d\n", (int) sizeof(char));

		printf("MIN char = %d\n", CHAR_MIN);
		printf("MAX char = %d\n", CHAR_MAX);
		printf("char bit size = %d\n", CHAR_BIT);
	}
	{
		printf("\n\r int: \n\r");
		int х = 10;
		// Выводим десятичное значение
		printf("integer = %d %%d\n", х);
		printf("integer = %i %%i\n", х);
		// Выводим восьмеричное значение
		printf("%o %%o\n", х);
		// Выводим шестнадцатеричное значение
		printf("%x %%x\n", х);
		printf("%X %%X\n", х);
		// Выводим размер в байтах
		printf("size of integer in bytes = %d\n", (int) sizeof(int));

		printf("constant values:\n");
		// #include <limits .h>
		printf("INT_MIN = %d\n", INT_MIN);
		printf("INT_MAX = %d\n", INT_MAX);
	}
	{
		printf("\n\r float:\n\r");
		float х = 10.5432f;
		х = 3.14159F;
		// Выводим значение
		printf("float value = %f\n", х);
		printf("float value = %.2f\n", х);
		// Выводим размер в байтах
		printf("size of float in bytes = %d\n", (int) sizeof(float));
	}
	{
		printf("\n\r double:\n\r");
		double х = 10.5432;
		// Выводим значение
		printf("double value = %f\n", х);
		printf("double value = %.2f\n", х);
		// Выводим размер в байтах
		// 10.543200
		// 10.54
		printf("size of double in bytes = %d\n", (int) sizeof(double)); // 8
	}
	{
		printf("\n\r signed char:\n\r");
		signed char min = -128, max = 127, ch = 'w';
		// Выводим символ
		printf("%c\n", ch); // w
		// Выводим код
		printf("%d\n", ch); // 119
		printf("MIN signed char %d\n", min); // -128
		printf("MAX signed char %d\n", max); // 127

		// Выводим размер в байтах
		printf("size of int in bytes = %d\n", (int) sizeof(ch));
		// #include <limits .h>
		printf("constant values:\n");
		printf("SCHAR_MIN = %d\n", SCHAR_MIN);
		printf("SCHAR_MAX = %d\n", SCHAR_MAX);
	}
	{
		printf("\n\r signed int:\n\r");
		signed int min = -2147483647 - 1;
		signed max = 2147483647;
		printf("min = %d\n", min);
		printf("max = %i\n", max);
		// Выводим размер в байтах
		printf("MIN signed int %d\n", (int) sizeof(min));
		printf("MAX signed int %d\n", (int) sizeof(max));
		// -2147483648
		// 2147483647
		// 4
	}
	{
		printf("\n\r unsigned char:\n\r");
		unsigned char min = 0, max = 255;
		printf("%d\n", min); // 0
		printf("%d\n", max); // 255
		printf("%%hu %hu\n", min); // 0
		printf("%%hu %hu\n", max); // 255

		// Выводим размер в байтах
		printf("MIN unsigned char %d\n", (int) sizeof(min)); // 1
		// #include <limits .h>
		printf("constant values:\n");
		printf("MAX unsigned char %d\n", UCHAR_MAX);
	}
	{
		printf("\n\r unsigned int: \n\r");
		unsigned int min = 0;
		unsigned max = 4294967295U;
		printf("MIN unsigned int %u\n", min);
		printf("MAX unsigned int %u\n", max);
		unsigned value = 50000U;
		printf("unsigned value %u\n", value);

		// Выводим размер в байтах
		printf("unsigned int in bytes %d\n", (int) sizeof(min));
		// #include <limits .h>
		printf("UINT_MAX = %u\n", UINT_MAX);
	}
	{
		printf("\n\r short int: \n\r");
		short int min = -32768;
		short max = 32767;
		printf("min = %hd\n", min);
		printf("max = %hi\n", max);

		// Выводим размер в байтах
		printf("'short int' in bytes %d\n", (int) sizeof(min));
		// #include <limits .h>
		printf("constant values:\n");
		printf("SHRT_MIN = %d\n", SHRT_MIN);
		printf("SHRT_MAX= %d\n", SHRT_MAX);

	}
	{
		printf("\n\r unsigned short int: \n\r");
		unsigned short int min = 0;
		unsigned short max = 65535;
		printf("min = %hu\n", min);
		printf("max = %hu\n", max);
		// Выводим размер в байтах
		printf("'unsigned short int' in bytes is %d\n", (int) sizeof(min));
		// #include <limits .h>
		printf("constant values:\n");
		printf("USHRT_MAX = %d\n", USHRT_MAX);
	}
	{
		printf("\n\r long int: \n\r");
		long int min = -2147483647L - 1;
		long max = 2147483647L;
		printf("min = %ld\n", min);
		printf("max =  %li\n", max);

		// Выводим размер в байтах
		printf("'long int' in bytes is %d\n", (int) sizeof(min));
		// #include <limits .h>
		printf("constant values:\n");
		printf("LONG_MIN = %ld\n", LONG_MIN);
		printf("LONG_MAX =  %ld\n", LONG_MAX);
	}
	{
		printf("\n\r unsigned long int: \n\r");
		unsigned long int min = 0UL;
		unsigned long max = 4294967295UL;
		printf("min = %lu\n", min);
		printf("max = %lu\n", max);
		// Выводим размер в байтах
		printf("'unsigned long int' in bytes is %d\n", (int) sizeof(min));
		// #include <limits.h>
		printf("LONG_MAX =  %ld\n", LONG_MAX);
		printf("ULONG_MAX = %lu\n", ULONG_MAX);
	}

	{
		printf("\n\r long long int: \n\r");
		long long int min = -9223372036854775807LL - 1LL;
		long long max = 9223372036854775807LL;
		printf("min = %lld\n", min); // -9223372036854775808
		printf("max = %lli\n", max);

		// Выводим размер в байтах
		printf("'long long int' in bytes is %d\n", (int) sizeof(min));
		// #include <limits.h>
		printf("LLONG_MIN= %lld\n", LLONG_MIN);
		printf("LLONG_MAX = %lld\n", LLONG_MAX);
		printf("LONG_LONG_MIN = %lld\n", LONG_LONG_MIN);
		printf("LONG_LONG_MAX = %lld\n", LONG_LONG_MAX);
	}
	{
		printf("\n\r unsigned long long int: \n\r");
		unsigned long long int min = 0ULL;
		unsigned long long max = 18446744073709551615ULL;
		printf("min = %llu\n", min);
		printf("max = %llu\n", max);

		// Выводим размер в байтах
		printf("'unsigned long long int' in bytes is %u\n", (int) sizeof(min));
		// #include <limits.h>
		printf("ULLONG_MAX= %llu\n", ULLONG_MAX);
		printf("ULONG_LONG_MAX = %llu\n", ULONG_LONG_MAX);
	}

	{
		printf("\n\r long double: \n\r");
		long double x = 8e+245L;
		printf("x = %Le\n", x);
		printf("'long double' in bytes is %d\n", (int) sizeof(x));
	}
	{
		printf("\n\r NULL: \n\r");

		void* null01 = NULL;
		printf("NULL is %p", null01);
	}
	{
		enum {
			ONE = 1, TWO, THREE, FOUR
		};
		enum DAY {
			SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
		};
		enum BOOLEAN {
			NO, YES
		};
	}
	return EXIT_SUCCESS;
}

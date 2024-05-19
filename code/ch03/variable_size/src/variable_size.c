#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

#define DEF_МY_CONST (-5)
#define ERR1 "Сообщение об ошибке"
#define ERR2 "Сообщение об ошибке \
на нескольких \
строках"
#undef ERR2

int main(void) {

	int8_t min = INT8_MIN;
	int8_t max = INT8_MAX;
	uint8_t umax = UINT8_MAX;
	printf("min = %d\n", min);
	printf("max = %d\n", max);
	printf("umax = %d\n", umax);

	int64_t х = 9223372036854775807LL;
	printf("%" PRId64, х); // 9223372036854775807

	{
		int x = 10;
		printf("sizeof х = %d\n", (int) sizeof x); // 4
		printf("sizeof(х) = %d\n", (int) sizeof(x)); // 4
		printf("sizeof(int) = %d\n", (int) sizeof(int)); // 4
		size_t size = sizeof x;
		printf("sizeof x = %d\n", (int) size); // 4
	}
	{
		int x = 5, y = 10, z = x + y;
		printf("x = %d, y = %d, z = %d\n", x, y, z);
	}
	{
		typedef long int lint;
		lint x = 5L, y = 10L;
		printf("x = %ld, y = %ld\n", x, y);
	}
	{
		const int МY_CONST = 10;
		printf("МY_CONST = %d\n", МY_CONST);
		int y;
		y = МY_CONST + 20;
		printf("МY_CONST + 20 = %d\n", y);
		printf("DEF_МY_CONST = %d\n", DEF_МY_CONST);
		printf("ERR1 = %s\n", ERR1);
//		printf("ERR2 = %s\n", ERR2);
	}
	{
		puts("");
		puts("Встроенные макросы:");
		printf("%d\n", __LINE__);
		printf("%s\n", __FILE__);
		printf("%s\n", __DATE__);
		printf("%s\n", __TIME__);
	}
	{
		puts("");
		puts("Спецификаторы хранения");
		auto int x = 10;
		printf("%d\n", x);

		register int x2 = 20;
		printf("%d\n", x2);

		extern int x3;
		printf("%d\n", x3);
	}
	{
		puts("");
		puts("Пример использования static:");

		void func(void);

		func();
		func();
		func();
	}
	return EXIT_SUCCESS;
}

int x3 = 33;

void func(void) {
	static int x = 0;

	++x;
	printf("Current static value = %d\n", x);
}

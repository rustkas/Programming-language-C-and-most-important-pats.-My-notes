#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str1[7] = { 'S', 't', 'r', 'i', 'n', 'g', '\0' };
	char str2[7] = "String";
	printf("String#1 = %s\n", str1);
	printf("String#2 = %s\n", str2);

	char str[][20] = { "String1", "String2", "String3" };
	printf("%s\n", str[0]); // String1
	printf("%s\n", str[1]); // String2
	printf("%s\n", str[2]); // StringЗ
	return EXIT_SUCCESS;
}

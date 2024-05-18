/*
 ============================================================================
 Name        : command_line_args.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   printf("argc = %d\n", argc);
   for (int i = 0; i < argc; ++i) {
      printf("%d) %s\n", i, argv[i]);
   }
	return EXIT_SUCCESS;
}

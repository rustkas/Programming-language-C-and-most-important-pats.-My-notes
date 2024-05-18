#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(void) {
   setlocale(LC_ALL, "Russian_Russia.1251");
   char passwd[17] = "";
   int flag = 0, i = 0, ch = 0;
   printf("Введите пароль: ");
   fflush(stdout);
   do {
      ch = getchar();
      if (i > 15 || ch == '\r' || ch == '\n') {
         flag = 1;
         passwd[i] = '\0';
         break;
      }
      else if (   (ch > 47 && ch < 58)   // Цифры от 0 до 9
               || (ch > 64 && ch < 91)   // Буквы от A до Z
               || (ch > 96 && ch < 123)) // Буквы от a до z
      {
         passwd[i] = (char)ch;
         printf("%s", "*");
         fflush(stdout);
         ++i;
      }
      else { // Если недопустимый символ, то выходим
         puts("\nВы ввели недопустимый символ");
         return EXIT_FAILURE;
      }
   } while (!flag);

   printf("\n\rВы ввели: %s\n", passwd);
   return EXIT_SUCCESS;
}

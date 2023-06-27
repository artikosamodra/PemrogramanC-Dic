#include<stdio.h>

int main()

{
   int i;
   
   i = 3;
   printf("Nilai i :%d\n", i, i++); /*i++ = nilai +1 sesudah di printf*/
   
   i = 3;
   printf("%d\n", ++i); /*++i = nilai +1 sebelum di printf*/
   
/*Aktivitas Kreatif*/
/*
1.  Selain inkremen, dikenal operator dekremen yaitu --.
    - Gantilah notasi ++ dengan -- dan amati eksekusi programnya.
*/
   i = 3;
   printf("Nilai i :%d\n", i, i--); /*i-- = nilai -1 sesudah di printf*/
   
   i = 3;
   printf("%d\n", --i); /*--i = nilai -1 sebelum di printf*/
   
    return 0;
}

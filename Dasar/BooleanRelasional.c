#include<stdio.h>

int main()

{
   int uang = 6000;
   int hujan = 0; /*0 = false*/
   
   printf("uang>5000 dan tidak hujan : %d \n", (uang>5000) && (!hujan));
   
/*Aktivitas Kreatif*/
/*
1. Tuliskanlah beberapa kondisi lainnya berdasarkan lebih banyak variabel, dan tuliskanlah ekspresinya dalam bahasa C.
*/
   
   printf("uang<5000 dan hujan: %d \n", (uang<5000) && (hujan));
   printf("uang<5000 dan tidak hujan: %d \n", (uang<5000) && (!hujan));
   printf("uang>5000 dan hujan: %d \n", (uang>5000) && (hujan));
   
   printf("uang>5000 atau tidak hujan : %d \n", (uang>5000) || (!hujan));
   printf("uang<5000 atau hujan: %d \n", (uang<5000) || (hujan));
   printf("uang<5000 atau tidak hujan: %d \n", (uang<5000) || (!hujan));
   printf("uang>5000 atau hujan: %d \n", (uang>5000) || (hujan));

    return 0;
}

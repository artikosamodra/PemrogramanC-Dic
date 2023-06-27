#include<stdio.h>

#define FALSE 0 /*define : untuk mendefinisikan nilai char, int dan float*/
#define NOL 0
#define SATU 1
#define pi 3.1415
#define ENAM 9 /*Aktivitas kretif*/


int main ()
{
    const int maks=3;
    const float param =2.5;
    const char cc = 65 ;
    const char cA = 'A' ;
    const float PII=100.5; /*Aktivitas kretif*/


    printf ("PI  = %6.2f\n", pi);
    printf ("NOL  = %d\n", NOL);
    printf ("SATU  = %d\n", SATU);
    printf ("FALSE  = %d\n", FALSE);
    printf ("maks  = %d\n", maks);
    printf ("param  = %f\n", param);
    printf ("cc  = %c\n", cc);
    printf ("cA  = %c\n", cA);
    printf ("3\n"); /*tanpa memakai nama, tidak disarankan */
    
    printf ("ENAM = %d\n", ENAM); /*Aktivitas kretif*/
    printf ("PII = %f\n", PII); /*Aktivitas kretif*/
    
    
    /*Aktivitas kretif Nomor 2*/
    printf ("SATU+SATU  = %d\n", SATU+SATU);
    printf ("FALSE+7  = %d\n", FALSE+7);
    printf ("maks+PI  = %f\n", maks+pi);

    
    
    
/*Aktivitas kretif*/
/*
1.  Mendefinisikan nama konstanta yang nilainya tidak sesuai maknanya.
    - Contoh:  #define ENAM 9; const float PII=100.5;
    *Catatan : kreativitas seperti ini sebaiknya tidak dilakukan karena membingungkan pembaca program dan bisa menimbulkan salah pengertian.
2.  Cobalah untuk mengubah nilai konstanta pada badan program dengan melakukan assignment.*/

/*Jawab
1.  Define dan const mengikuti nilai ataupun definisi yang diberikan pada tiap variabel meskipun tidak sesuai dengan maknanya
2.  Pada setiap variabel dapat dilakukan operasi bilangan, catatan : menyesuaikan pemanggilan type (%c, %d, %f)
*/


    return 0;
}
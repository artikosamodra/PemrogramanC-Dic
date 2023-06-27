#include<stdio.h>

int main()
{
    
    int i;
    
    for (i=0; i<3; i++)
    {
        printf("Saya senang belajar bahasa C \n");
    }


/*Aktivitas kreatif*/
/*
1.  Ubahlah teks program di atas sehingga mengulang untuk menuliskan teks “Saya senang belajar bahasa C” sebanyak 1000 kali.
2.  Tuliskan sebuah program yang dapat mengulang menuliskan “Saya seang belajar bahasa C” sebanyak N kali, dengan nilai N yang akan ditentukan dari deklarasinya.
3.  Tuliskan sebuah program yang dapat mengulang menuliskan “Saya seang belajar bahasa C” sebanyak N kali, dengan nilai N yang akan dibaca dengan scanf.
*/


/*Jawab */
/*1.*/
/* 
    for (i=0; i<1000; i++)
    {
        printf("Saya senang belajar bahasa C \n");
    }
 */
 
/*2.*/
/*  
    for (i=15; i>0; i--)
    {
        printf("Saya senang belajar bahasa C \n");
    }
*/ 
 
/*3.*/
/*
    for (i=1000; i>0; i--)
    {
        scanf("%d", &i);
        printf("Saya senang belajar bahasa C \n");
    }
*/
    return 0;
}
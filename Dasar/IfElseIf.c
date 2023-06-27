#include<stdio.h>

int main()
{
    
    int a;
    
    printf("Contoh IF tiga kasus \n");
    printf("Ketikan suatu nilai integer : \n");

    scanf("%d", &a);
    if (a>0)
    {
        printf("Nilai a positif %d \n", a);
    }
    else if (a==0)
    {
        printf ("Nilai a nol %d \n", a);
    }
    else
    {
        printf ("Nilai a negatif %d \n", a);
    }


/*Aktivitas kreatif*/
/*
1.  Cobalah membuat latihan dengan lebih dari 3 kasus, misalnya:
    - Berdasarkan kode hari dalam minggu, Anda akan menuliskan (0=Minggu; 1=Senin; 2=Selasa; 3=Rabu; 4=Kamis; 5=Jumat; 6=Sabtu).
    - Berdasarkan kode bulan, Anda menuliskan nama bulan mulai Januari s.d. Desember.

2. Apa perbedaan program di atas dengan program sebagai berikut:

    
    printf ("Contoh IF tiga kasus dengan tiga kalimat IF \n");
    printf ("Ketikkan suatu nilai integer :");
    scanf ("%d", &a);
    if (a > 0)
    {
        printf ("Nilai a positif %d \n", a);
    }
    if (a == 0)
    {
        printf ("Nilai Nol %d \n", a);
    }
    if (a < 0)
    {
        printf ("Nilai a negatif %d \n", a);
    }
*/


/*Jawab */
/*1.*/
/*    printf("Contoh IF tiga kasus \n");
    printf("Ketikan suatu nilai integer : \n");

    scanf("%d", &a);
    if (a<5)
    {
        printf("Ini hari kerja %d \n", a);
    }
    else if (a==5)
    {
        printf ("Ini hari bebas %d \n", a);
    }
    else
    {
        printf ("Ini hari libur %d \n", a);
    }
 */
 
 /*2. Tidak memiliki fungsi jika maka, memilih fungsi yang sesuai input, tidak melalui proses else if*/

    return 0;
}
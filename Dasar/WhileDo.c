#include<stdio.h>

int main()
{
    
    int i=1;
    
    while (i<3)
    {
        printf("Saya senang belajar C \n");
        
        i++;
    }


/*Aktivitas kreatif*/
/*
1.  Analisis bentuk pengulangan bagian ini, dan diskusikan mengenai kesamaan dan perbedaannya dengan bentuk for dengan pencacah yang dijelaskan sebelumnya.
2.  Berikan contoh program yang mengandung instruksi pengulangan WHILE yang tidak pernah dieksekusi instruksi dalam badan loop-nya.
3.  Ubahlah contoh program dalam bentuk for pada contoh sebelumnya menjadi pengulangan dengan pola kalimat while () {}.
*/


/*Jawab */
/*1.    for : seluruh <kondisi awal>; <kondisi pengulangan>; <perubahan kondisi> berada satu situasi setelah for.
        while : <kondisi awal> dituliskan pada deklarasi variabel, <kondisi pengulangan> setelah while dan <perubahan kondisi> di akhir perintah eksekusi.
*/

/*2*/
/*
    int i=3;
    
    while (i<3)
    {
        printf("Saya senang belajar C \n");
        i++;
    }

    return 0;
}
*/

/*3*/
/*
    int i=1000;
    
    while (i>0)
    {
        scanf("%d", &i);
        printf("Saya senang belajar bahasa C \n");
        i--;
    }
*/

    return 0;
}

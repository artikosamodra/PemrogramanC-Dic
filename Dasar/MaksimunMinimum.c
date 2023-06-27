#include<stdio.h>

int main()
{
    
    int i; /*Nama tabel*/
    int Tab[10]= {1, 50, 6,100, 3, 100, 30, 8, 99, 200}; /*Nilai tabel*/
    int max;
    int min;
    
    float jumlah;
    float average;
    
    int j, k, urut;
    float median;
        
/*Pengurutan Nilai tabel*/

    for (i=0; i<10; i++)
    {
        urut=i;
        for (k= i ;k< 10; k++) 
        {
            if (Tab[k]< Tab[urut])
            {
            urut=k;
            }
        }
        
    j= Tab[i];
    Tab[i]=Tab[urut];
    Tab[urut]= j;
    }
    
    for (i=0;i<10;i++)
    {
        printf (" %d ; ", Tab[i]);
    }
    printf("\n");
    
/*Nilai Max*/
    max = Tab[0];
    
    for(i=1; i<10; i++)
    {
        if (Tab[i]>max)
        {
            max=Tab[i];
        }
    }
    
    printf("Nilai Max = %d \n", max);

/*Aktivitas kreatif*/
/*
1.  Bangun algoritma lain dengan menggunakan pola algoritma penentuan maksimum menjadi:
    - Menentukan nilai minimum, dengan hanya mengubah variabel max menjadi min dan mengubah satu karakter saja.
    - Menentukan nilai rata-rata dari isi Tabel.
    - Menentukan “median” dari isi tabel. Median adalah nilai tengah. Anda bisa mengurutkannya kemudian mengambil item yang berada di tengahnya (total array / 2).
    - Jika ada kemungkinan bahwa nilai yang maksimum muncul lebih dari satu kali (misalnya anak yang paling tua umurnya sama), menentukan nilai maksimum dan sekaligus banyaknya elemen tabel yang nilainya maksimum tersebut.
2.  Karena Anda sudah mengenal berbagai bentuk loop, ubahlah program contoh di atas menggunakan bentuk loop yang lain.
*/

/*Jawab */
/*1*/
/*Minimum*/

    min = Tab[0];
    
    for(i=1; i>10; i++)
    {
        if (Tab[i]>min)
        {
            min=Tab[i];
        }
    }
    
    printf("Nilai Min = %d \n", min);

/*==================================================================================================================================================================================================================*/

/*Nilai rata-rata atau Average*/ /*solusi = membuat variable untuk total nilai tabel, kemudian variabel untuk rata-rata dengan membagi variabel total nilai*/

        for(i=0; i<10; i++)
    {
        jumlah = jumlah+Tab[i];
        average = jumlah/10;
    }
    
     printf("Nilai Rata-rata = %f \n", average);

/*==================================================================================================================================================================================================================*/

/*Nilai Median*/

    median = (Tab[4]+Tab[5])/2;
    printf("Median adalah = %2.f", median);

/*==================================================================================================================================================================================================================*/

/*2*/ /*Dengan Pengulangan While-Do*/

    printf("\n");
    printf("\n");
    printf("Pengulangan While-do");
    
/*Pengurutan Nilai tabel*/
    
    i = 0;
    while (i<10)
    {
        printf (" %d ; ", Tab[i]);
        i++;
    }
    
    printf("\n");
    
/*==================================================================================================================================================================================================================*/
    
/*Nilai Max*/
    max = Tab[0];
    
    i = 1;
    while (i<10)
    {
        if (Tab[i]>max)
        {
            max=Tab[i];
        }
        i++;
    }

    printf("Nilai Max = %d \n", max);

/*==================================================================================================================================================================================================================*/

/*Minimum*/

    min = Tab[0];
    
    i=1;
    while (i>10)
    {
        if (Tab[i]>min)
        {
            min=Tab[i];
        }
        i++;
    }
    
    printf("Nilai Min = %d \n", min);

/*==================================================================================================================================================================================================================*/

/*Nilai rata-rata atau Average*/ /*solusi = membuat variable untuk total nilai tabel, kemudian variabel untuk rata-rata dengan membagi variabel total nilai*/
    i = 0;
    while (i<10)
    {
        jumlah = jumlah+Tab[i];
        average = jumlah/20; /*karena 2 tabel jadi 20 Data*/
        i++;
    }
    
     printf("Nilai Rata-rata = %f \n", average); 
     
/*==================================================================================================================================================================================================================*/

/*Nilai Median*/
    median = (Tab[4]+Tab[5])/2;
    printf("Median adalah = %2.f", median);

/*==================================================================================================================================================================================================================*/

    return 0;
}
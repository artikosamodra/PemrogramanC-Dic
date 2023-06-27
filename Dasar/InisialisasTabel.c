#include<stdio.h>

int main()
{
    
    int Tab [5] = {1,2,3,4,5};
    float TabX[3] = {1.5, 3.5E2, 9.99};
    char Tabchar [4] = {'1', '2', '@', 'Z'};
    
    int i;
    
    for (i=0; i<5; i++)
    {
        printf("Tab[%d]= %d;", i, Tab[i]);
    }
    
    printf("\n");


/*Aktivitas kreatif*/
/*
1.  Modifikasi program untuk menuliskan nilai berderet ke bawah.
2.  Modifikasi program di atas, jika diinginkan outputnya adalah indeks tabel, dan tabelnya sebagai berikut:
    - 0 1
    - 1 2
    - 2 3
    - 3 4
    - 4 5
3.  Ubah program sehingga hasil outputnya menjadi:
    - Tab[0] = 1
    - Tab[1] = 2
    - Tab[2] = 3
    - Tab[3] = 4
    - Tab[4] = 5
*/


/*Jawab */
/*1.*/
/*
    for (i=0; i<5; i++)
    {
        printf("Tab[%d]\n = %d \n", i, Tab[i]);
    }
    
    printf("\n");
*/

/*2*/
/*
    for (i=0; i<5; i++)
    {
        printf("%d %d \n", i, Tab[i]);
    }
    
    printf("\n");
*/

/*3*/
/*
    for (i=0; i<5; i++)
    {
        printf("Tab[%d]= %d \n", i, Tab[i]);
    }
    
    printf("\n");
*/

    return 0;
}

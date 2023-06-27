#include<stdio.h>

int main ()
{
    int i;
    int Tab[10]= { 1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
    int max; /* indek di mana  Tab[max] bernilai maksimum */
    int k, temp; /* variabel kerja */
    
    int min;
    int ins;
    
    for (i=0; i<9; i++ )
    {
        max = i;
        for (k= i+1; k<10; k++)
        {
            if (Tab[k]> Tab[max])
            {
            max=k;
            }
        } 
 
        /* Tukar nilai Tab[max] dengan tab[i] */
        temp= Tab[i];
        Tab[i]= Tab[max];
        Tab[max] = temp;
    }
  
    printf ("Urutan dari nilai Maks ke Min :");
    for (i=0;i<10;i++)
    {
        printf (" %d ; ", Tab[i]);
    }
    printf("\n");
  
/*Aktivitas Kreatif*/
/*
1.  Ubahlah program di atas sehingga data terurut membesar, yaitu bahwa T[0] justru berisi data yang paling kecil nilainya.
2.  Ubahlah sehingga program bukan melakukan inisialisasi nilai, tetapi membaca data ukuran tabel (N), dan isi tabel Tab[0] s.d. Tab[N-1].
3.  Lakukan studi untuk mencari algoritma pengurutan nilai tabel lainnya, dan implementasikan dalam bahasa C.  
*/
 
/*Jawab*/

/*1*/

    for (i=0; i<9; i++ )
    {
        min = i;
        for (k= i+1; k<10; k++)
        {
            if (Tab[k]< Tab[min])
            {
            min=k;
            }
        } 
 
        temp= Tab[i];
        Tab[i]= Tab[min];
        Tab[min] = temp;
    }
  
    printf ("Urutan dari nilai Main ke Maks :");
    for (i=0;i<10;i++)
    {
        printf (" %d ; ", Tab[i]);
    }
    printf("\n");
  
/*2*/
    for (i=0; i<9; i++ )
    {
        min = i;
        for (k= i+1; k<10; k++)
        {
            if (Tab[k]< Tab[min])
            {
            min=k;
            }
        } 
 
        temp= Tab[i];
        Tab[i]= Tab[min];
        Tab[min] = temp;
    }
  
    printf ("Inisialisasi : \n");
    for (i=0;i<10;i++)
    {
        printf (" Tab[%d] ; [%d] \n", i, Tab[i]);
    }
    printf("\n");

/*3*/
/*Bubble Sort*/
    
    for (i=1;i<=9;i++)
    for (k=9;k>=(1+i);k--)
    {
        if (Tab[k-i]>Tab[k])
        {
            temp = Tab[k-1];
            Tab[k-1]=Tab[k];
            Tab[k]=temp;
        }
       
    }
    
  
    printf ("Urutkan Bubble Sort : \n");
    for (i=0;i<10;i++)
    {
        printf (" Tab[%d] ; [%d] \n", i, Tab[i]);
    }
    printf("\n");
  
  
    return 0;
}

    

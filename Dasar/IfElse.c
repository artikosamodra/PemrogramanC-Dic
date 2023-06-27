#include<stdio.h>

int main()
{
    
    int a;
    
    printf("Contoh IF dua kasus \n");
    printf("Ketikan suatu nilai integer : \n");

    scanf("%d", &a);
    if (a>=0)
    {
        printf("Nilai a positif %d \n", a);
    }
    else 
    {
        printf ("Nilai a negatif %d \n", a);
    }

    


/*Aktivitas kreatif*/
/*
1.  Anda dapat menuliskan eksekusi yang sama dari sebuah instruksi  if (...) {....}  else { .... }  dengan menuliskannya menjadi dua buah instruksi if yang berurutan sebagai berikut :  if ( <kondisi. ) {....}; if (<!kondisi>) { .... } dengan melakukan transformasi kode pada contoh program di atas.
*/


/*Jawab : fungsi if dan !if memanggil fungsi jika salah, namun jika benar keterangan muncul semua (keterangan tidak bermakna)*/
/*
    printf("Contoh IF dua kasus \n");
    printf("Ketikan suatu nilai integer : \n");

    scanf("%d", &a);
    if (a>=0)
    {
        printf("Nilai a positif %d \n", a);
    }
    if (!a>=0) 
    {
        printf ("Nilai a negatif %d \n", a);
    }
*/
    

    return 0;
}
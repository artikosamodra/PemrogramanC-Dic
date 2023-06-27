#include<stdio.h>

int main()

{
    int X=5;
    int Y=8;
    
    printf("Hasil X < Y : %d \n", X < Y);
    printf("Hasil X > Y : %d \n", X > Y);
    printf("Hasil X <= Y : %d \n", X < Y);
    printf("Hasil X >= Y : %d \n", X >= Y);
    printf("Hasil X == Y : %d \n", X == Y);
    printf("Hasil X != Y : %d \n", X != Y);
    
    printf("Hasil X == X : %d \n", X == X);
    printf("Hasil X != X : %d \n", X != X);
    
/*Aktivitas Kreatif*/
/*
1. Seringkali, pengguna pemula lupa dan salah menuliskan “sama dengan” dengan “=”.  Karena “=” artinya adalah mengisikan nilai, maka bisa berakibat fatal. Cobalah untuk mengganti secara sengaja “==” dengan “=”, amatilah apa yang terjadi. Anda akan mendapat “surprise.”
*/

    printf("Hasil X = X : %d \n", X = X); /*muncul nilai X dan bukan operasi perbandingan*/

    return 0;
}

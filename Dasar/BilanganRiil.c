#include<stdio.h>

int main()
{
    float f= 0.555;
    float x= 1.5E3;
    float y= 19;

    printf("Ini nilai f : %f \n", f);
    printf("Ini nilai f : %5.2f \n", f);
    printf("Ini nilai x : %10.2f \n", x);

/*Aktivitas kreatif*/
/* 1.   Nilai integer dan bilangan riil sebetulnya adalah angka numerik. Eksplorasi jika nilai yang diberikan tidak cocok dengan type yang diberikan, dengan mengkombinasikan program ini dengan program sebelumnya.*/

    printf("Ini nilai y : %f \n", y); /*maka akan menjadi bilangan riil atau muncul koma dibelakang angka*/
    printf("Ini nilai f : %d \n", f); /*jika menggunakan type yang salah (%d), maka muncul angka yang tidak sesuai*/

    return 0;
}
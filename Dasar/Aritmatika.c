#include<stdio.h>

int main()

{
    int x=5;
    int y=8;
    
    printf("Ini nilai x + y : %d \n", x+y);
    printf("Ini nilai x - y : %d \n", x-y);
    printf("Ini nilai x * y : %d \n", x*y);
    printf("Ini nilai x / y : %d \n", x/y);
    printf("Ini nilai y / x : %d \n", y/x);
    printf("Ini nilai x mod y : %d \n", x%y);
    
    float a=5, b=8;
    printf("Ini nilai a/b : %5.2f \n", a/b);
    printf("Ini nilai b/a : %5.2f \n", b/a);
    
    /*Aktifitas Kreatif*/
    /*
    1.  x+x+x
    2.  x*x+x
    */
    
    printf("Ini nilai x + x + x : %d \n", x+x+x);
    printf("Ini nilai x * x + x : %d \n", x*x+x);
    
    return 0;
}

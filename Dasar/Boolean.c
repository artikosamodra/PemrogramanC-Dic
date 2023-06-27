#include<stdio.h>

int main()

{
    int TRUE=1;
    int FALSE=0;
    
    printf("Ini nilai TRUE AND TRUE : %d \n", TRUE && TRUE); /*&& artinya dan*/
    printf("Ini nilai TRUE OR FALSE : %d \n", TRUE || TRUE); /*|| artinya atau*/ 
    printf("Ini nilai FALSE AND TRUE : %d \n", FALSE && TRUE);
    printf("Ini nilai FALSE OR FALSE : %d \n", FALSE || FALSE);
    printf("Ini nilai NOT TRUE : %d \n", !TRUE); /*! artinya bukan*/
    printf("Ini nilai NOT FALSE : %d \n", !FALSE);

    return 0;
}

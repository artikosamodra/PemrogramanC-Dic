#include<stdio.h>

int main()
{
    
    int Tab [5];
    
    int i;
    
    for (i=0; i<5; i++)
    {
        scanf("%d", &Tab[i]);
    }
    
    for (i=0; i<5; i++)
    {
        printf("Tab[%d]= %d;", i, Tab[i]);
    }
    
    printf("\n");


/*Aktivitas kreatif*/
/*
1.  Ubahlah program di atas sehingga pengisian tabel dilakukan dengan instruksi assignment. Diskusikan perbedaan, limitasi & kelebihan cara dari berbagai cara pengisian tabel (inisialisasi, assignment, atau pembacaan input) dan akibatnya. Memilih cara yang paling tepat untuk mendapatkan hasil yang sama adalah mengolah kemampuan problem solving.
*/


/*Jawab */
/*inisialisasi*/
/*
    int i=0;
    
    while (i<5)
    {
        printf("Tab[%d]= %d; \n", i, Tab[i]);
        i++;
    }
    
    printf("\n");
*/

/*assignment*/
/*
    int i;
    
    i = 0;
    while (i<5)
    {
        printf("Tab[%d]= %d; \n", i, Tab[i]);
        i++;
    }

    printf("\n");
*/

/*Pembacaan Input*/
/*
    int i;
    
    for (i=0; i<5; i++)
    {
        scanf("%d", &Tab[i]);
        printf("Tab[%d]= %d; \n", i, Tab[i]);
    }

    printf("\n");
*/

    return 0;
}

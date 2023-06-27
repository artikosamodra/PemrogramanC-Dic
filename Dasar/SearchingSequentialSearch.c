#include<stdio.h>

int main() {
    int i;
    int Tab[10] ={1, 50, 6, 200, 3, 100, 30, 8, 99, 11};
    int X=8;
    
    
    i=0;
    while ((Tab[i] !=X) && (i<9))
    {
        
        i++;
    }
    
    if(Tab[i]==X){
        printf("indeks bernilai X = %d", i);
    } else {
        printf("Nilai tidak diketemukan");
    }
    
    return 0;
}

/*Aktivitas kreatif.
1. Ubah, output indeks terbesar
2. Ubah, mencetak semua posisi index X, memungkinkan memiliki lebih dari 1 nilai
3. membuat program index dari X dengan input %scanf
4.mencari metode search lain
5. searcfh yg optimal, mengurutkan data
6. ubah, menjadi binary search, mengurutkan, menjadi dari setengah kedepan atau kebelakang. */

/*1*/



/**/

/**/

/**/

/**/

/**/

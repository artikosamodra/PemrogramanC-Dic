#include<stdio.h>

int main()
{
    
    char cc;
    char c;
 
    printf ("hello\n");
    printf ("baca 1 karakter saja : ");
    scanf ("%d ", &c);
    printf ("%c\n", cc);
    
    printf ("baca 1 karakter saja : ");
    scanf ("%d ", &c);
    printf ("%d\n", c); 
    
/*Aktivitas Kreatif Nomor 2*/
/*
    printf ("baca 1 karakter saja : ");
    scanf ("%c ", &cc);
    scanf ("%c ", &cc);
    printf ("%d\n", cc);
    printf ("%c\n", cc);
*/

/*Aktivitas Kreatif Nomor 3*/
/*
    printf ("baca 1 karakter saja : ");
    scanf ("%c %c", &cc, &c);
    printf ("%d\n", cc, c);
    printf ("%c\n", cc, c);
*/


/*Aktivitas kreatif*/
/*
1.  Setiap pembacaan selalu diakhiri dengan mengetikkan [enter] yang pada kenyataannya tidak disimpan. Lalu, bagaimana caranya untuk mempunyai sebuah variabel yang isinya [Enter]?
2.  Amati dan jelaskan apa yang terjadi jika dituliskan dua buah instruksi sebagai berikut:
    - scanf ("%c ", &cc); scanf ("%c ", &cc);
3.  Apa yang harus diketikkan sebagai input jika dituliskan instruksi sebagai berikut:
    - scanf ("%c %c", &cc, &c);

/*Jawab*/
/*1. Menambahkan fungsi (\n). contoh >> printf("baca 1 karakter saja : \n");scanf ("%d ", &c);*/
/*2. scanf ("%c ", &cc); scanf ("%c ", &cc); >> tidak berpengaruh, tetap dilakukan 1 pemanggilan, hanya meningkatkan pemakaian memori untuk memproses*/
/*3. maka input nya adalah >> printf ("%d\n", cc, c); (untuk nilai ASCII) dan >> printf ("%c\n", cc, c); (untuk char)*/

    return 0;
}
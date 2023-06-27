#include<stdio.h>
int main ()
{
    int i =5; 
    printf ("Ini nilai i : %d \n", i);
  
    /*Aktivitas kreatif*/
    /*
    1.  Latihan pemahaman nama variabel: gantilah teks program int i; menjadi  int I; atau int radius;int umur;int jumlah; dan amatilah apa yang terjadi saat eksekusi.
    2.  Latihan pemahaman eksekusi:
        - Gantilah baris int i=5; dengan int i; dan amatilah apa yang terjadi.
        - Tuliskan beberapa baris nama variabel integer, misalnya j, k dan cetaklah setelah deklarasinya. Kesimpulan apa yang Anda dapat?
    3.  Lakukan inisialisasi dengan nilai yang bukan 5 tetapi sesuai perhitungan yang Anda inginkan. Untuk beberapa nilai, Anda akan mengalami persoalan karena program tidak berjalan mulus. Identifikasi kasus yang berjalan baik, dan yang berjalan dengan tidak baik. Untuk yang tidak berjalan dengan baik, mengapa?
    4.  Lakukan percobaan dengan mengganti nama dan type variabel sesuai dengan definisi nama dan nilai yang anda tentukan. Misalnya :
        - int bebek=10; || bebekku ada 10
        - float luas=2.5; || luas kebunkan 2.5 hektar
        - float keliling= 2* 3.14* 5.5; || keliling dari sebuah lingkaran yang jari-jarinya 5.5. cm */

    /*jawab*/
    /*1*/
    int l = 6;
    int radius = 235;
    int umur = 25;
    int jumlah = 19;
  
    printf ("Ini nilai l : %d \n", l);
    printf ("Ini nilai radius : %d \n", radius);
    printf ("Ini nilai umur : %d \n", umur);
    printf ("Ini nilai jumlah : %d \n", jumlah);
  
    /*2*/
    int j =4;
    int k = 1;
    /*Jawab
    - jika "int i=5" dirubah "int i", maka nilai 0
    - jika ada variable sebeluh deklarasi (printf), nilai int i tetap 0
    - jika ada 1 variable setelah deklarasi (printf), nilai i tetap 0
    - jika ada lebih 1 variable setelah deklarasi (printf), nilai besar acak*/
    
    /*3*/
    /*Jawab
    - jika nilai i dirubah 7, maka nilai i = 7
    - jika nilai i dirubah 7+2, maka nilai i = 9
    - jika nilai i dirubah 7+2.5 maka nilai i = 9, .5 tidak terbaca nilai bilangan bulat, harus menggunakan float*/
    
    /*4*/
    int bebek=10;
    float luas=2.5;
    float keliling=2*3.14*5.5;
    
    printf("bebekku ada : %d ekor\n", bebek);
    printf("luas kebunku : %f hektar\n", luas);
    printf("keliling dari sebuah lingkaran yang jari-jari 5.5 adalah : %f", keliling);
    
    return 0;
}
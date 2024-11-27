#include <stdio.h>

/*  
Arithmetic Operator :
    +  (addition)      Contoh: 2 + 3 = 5
    -  (subtraction)   Contoh: 5 - 3 = 2
    *  (multiplication)Contoh: 2 * 3 = 6
    /  (division)      Contoh: 6 / 2 = 3
    %  (modulus)       Digunakan untuk mendapatkan sisa pembagian.
       Contoh: 
         5 % 2 = 1  (5 dibagi 2, sisanya 1)
         2 % 4 = 2  (2 dibagi 4, sisanya tetap 2 karena 4 lebih besar dari 2)
*/

int main() {
    // Modulus operator: Menghitung sisa pembagian
    int a = 5, b = 2, c = 4; 
    printf("5 %% 2 equals to = %d", a % b); // Menampilkan hasil 5 % 2 = 1
    printf("\n2 %% 4 equals to = %d", b % c); // Menampilkan hasil 2 % 4 = 2
    
    // Increment dan Decrement: a++, ++a, a--, --a
    // ++a: Increment dulu baru gunakan nilainya.
    // a++: Gunakan nilainya dulu, kemudian increment.
    int a = 1; 
    a++; // Nilai `a` bertambah 1. Sekarang `a = 2`.
    printf("%d\n", a); // Menampilkan 2.

    int b = 1;
    printf("%d\n", b++); // Gunakan nilai `b` (1) dulu, lalu increment. Nilai sekarang `b = 2`.
    printf("%d\n", b);   // Menampilkan nilai `b` yang sudah diincrement (2).

    int c = 1;
    printf("%d\n", ++c); // Increment dulu (`c = 2`), lalu gunakan nilainya. Output: 2.
    // printf("%d\n", --c); // Decrement `c` (nilai kembali ke 1), lalu gunakan nilainya.


    // Assignment Operators: Operasi penugasan
    int a = 1;
    printf("value of a : %d\n", a); // Menampilkan nilai awal `a` (1).
    a += 2; // Sama seperti: a = a + 2. Sekarang `a = 3`.
    printf("value of a+=2 : %d", a); // Menampilkan nilai baru `a` (3).

    return 0;
}

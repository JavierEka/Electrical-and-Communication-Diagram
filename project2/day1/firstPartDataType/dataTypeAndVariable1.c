#include <stdio.h> // Mengimpor pustaka standard input-output untuk fungsi seperti printf() dan scanf().
#include <stdint.h> // Mengimpor pustaka untuk tipe data integer dengan ukuran tetap seperti uint8_t.

/*
Penjelasan tentang <stdint.h>:
Pustaka ini menyediakan tipe data integer yang ukurannya tetap (fixed-width). Contoh: uint8_t, uint16_t.
uint8_t adalah unsigned 8-bit integer, dengan nilai maksimum 255 (2^8 - 1).
*/

int main() {
    uint8_t eightBitVariable = 250; 
    // Deklarasi variabel 8-bit unsigned integer dengan nilai awal 250.
    // Cocok digunakan jika hanya membutuhkan angka antara 0-255 untuk menghemat memori.

    unsigned int unsignedInt = 255;
    // Deklarasi variabel unsigned int, yang memiliki nilai maksimum jauh lebih besar
    // (tergantung sistem, biasanya 4 byte atau 32-bit, yaitu 0 hingga 4,294,967,295).

    // Menampilkan nilai dan ukuran memori yang digunakan oleh masing-masing variabel.
    printf("%d, size of eightBitVariable : %d", eightBitVariable, sizeof(eightBitVariable));
    printf("\n%d, size of the unsignedInt : %d \n", unsignedInt, sizeof(unsignedInt));

    /*
    Penjelasan:
    - sizeof(eightBitVariable): Mengembalikan ukuran memori yang digunakan oleh variabel eightBitVariable.
    - sizeof(unsignedInt): Mengembalikan ukuran memori yang digunakan oleh variabel unsignedInt.
    */

    int integer1; // Deklarasi variabel integer1 dengan tipe data int.
    printf("enter a number : "); // Menampilkan pesan kepada pengguna untuk memasukkan angka.
    scanf("%d", &integer1); // Membaca input dari pengguna dan menyimpannya di variabel integer1.
    printf("integer1 is = %d", integer1); // Menampilkan nilai integer1 yang dimasukkan pengguna.
    
    /*
    Penjelasan:
    - `%d`: Placeholder untuk angka bertipe integer.
    - `&integer1`: Menunjukkan alamat memori tempat nilai input akan disimpan.
    */
}

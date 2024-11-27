#include <stdio.h>

int main() {

    char charArray[5] = {'a', 'r', 'u', 'n', 'd'};
    // Mendefinisikan array karakter dengan panjang 5, yang berisi huruf 'a', 'r', 'u', 'n', 'd'.
    // Tidak ada ruang untuk karakter null terminator '\0', sehingga tidak dianggap sebagai string valid di C.

    char charArray[6] = {'a', 'r', 'u', 'n', 'd'}; // Sama seperti di atas, tapi panjang array adalah 6.
    // Meski panjangnya 6, karakter terakhir tidak diisi, sehingga '\0' mungkin ditambahkan secara otomatis.

    printf("%s\n", charArray); // Menampilkan string dari array. Jika '\0' tidak ada, hasilnya tidak terduga.
    printf("%c\n", charArray[0]); // Menampilkan karakter pertama dari array, yaitu 'a'.
    printf("%c\n", charArray[5]); // Menampilkan karakter pada indeks ke-5, hasilnya bisa acak jika tidak diinisialisasi.

    char string1[6] = "Hello"; 
    // Mendefinisikan string dengan panjang 6. Secara implisit, karakter '\0' ditambahkan di akhir string.
    // Contohnya: {'H', 'e', 'l', 'l', 'o', '\0'}.

    // Kita juga bisa mendefinisikan string tanpa menentukan panjang array:
    char stringHello[] = "Hello"; 
    // Panjang otomatis menjadi 6 (5 karakter + 1 untuk '\0').

    printf("%d\n", sizeof(stringHello)); 
    // Menampilkan ukuran total array, yaitu 6 (5 karakter + '\0').

    printf("%c", stringHello); 
    // Menampilkan karakter pertama dari stringHello, yaitu 'H'.

    printf("%s\n", stringHello); 
    // Menampilkan seluruh string "Hello".

    // Array 2D: Berisi beberapa string dengan panjang maksimum tertentu.
    char stringArray[][6] = {"Arund", "Taib", "Anton"};
    // - stringArray[0]: "Arund" dengan '\0' otomatis di akhir.
    // - stringArray[1]: "Taib" dengan '\0' otomatis di akhir.
    // - stringArray[2]: "Anton" dengan '\0' otomatis di akhir.

    printf("%s", stringArray[2]); 
    // Menampilkan string di indeks ke-2 dari array, yaitu "Anton".

    return 0;

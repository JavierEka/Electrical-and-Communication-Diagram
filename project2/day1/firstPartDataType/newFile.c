#include <stdio.h> // Mengimpor pustaka standard input-output untuk fungsi seperti printf() atau scanf()

int main() {
    int a = 1, b = 2; // Mendeklarasikan variabel integer a dan b dengan nilai awal masing-masing 1 dan 2.
    
    // Cara di atas sama seperti mendeklarasikan variabel secara terpisah:
    int a = 1;
    int b = 2;

    int calculate; // Mendeklarasikan variabel calculate.
    calculate = a + b; // Menjumlahkan a dan b, lalu menyimpan hasilnya di variabel calculate.

    printf("hello world!"); // Contoh perintah untuk mencetak "hello world!" ke layar. 
    printf("%d", calculate); // Mencetak nilai dari variabel calculate.

    int a = 1, b = 2; // Mendeklarasikan ulang variabel a dan b.
    a = a + 1; // Menambahkan 1 ke nilai variabel a.
    printf("%d", a); // Mencetak nilai variabel a setelah ditambahkan.

    int a = 1; // Deklarasi variabel a dengan nilai awal 1.
    int a = 2; // Kesalahan: Variabel a dideklarasikan ulang dalam scope yang sama. Ini akan menyebabkan error.

    return 0; // Mengakhiri program dengan nilai balik 0.
}

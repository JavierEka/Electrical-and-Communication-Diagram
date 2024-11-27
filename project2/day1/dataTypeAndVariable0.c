#include "stdio.h"

 /*
    **Penjelasan Format Specifiers**:
    %d atau %i : Signed integer (4 byte, tergantung sistem).
    %u         : Unsigned integer (4 byte).
    %ld atau %li: Long signed integer (8 byte).
    %lu        : Unsigned long integer (8 byte).
    %f         : Float (4 byte, 23-bit mantissa).
    %lf        : Double (8 byte, 52-bit mantissa).
    %Lf        : Long double.
    %c         : Karakter (1 byte).
    %s         : String.

    **Konversi Antar Basis**:
    - Base 2 (biner): Menggunakan angka 0 dan 1.
    - Base 8 (oktal): Menggunakan angka 0 sampai 7.
    - Base 10 (desimal): Sistem hitung standar manusia, 0 sampai 9.
    - Base 16 (heksadesimal): 0 sampai F (0-9 dan A-F, di mana A=10, F=15).

    Contoh konversi:
    - 1001 (base 2) = 11 (base 8) = 9 (base 16) = 9 (base 10).
    - FF (base 16) = 255 (base 10) = 1111 1111 (base 2, 8-bit).

    **Karakteristik Basis**:
    - 1 digit maksimum dalam heksadesimal (F) setara dengan nilai maksimum 4-bit biner (1111).
    - FF dalam heksadesimal = 1111 1111 dalam biner = 255 dalam desimal.
 */

int main()
{
    // Deklarasi variabel dengan tipe data tertentu.
    short shortValue = 25; // Tipe data short, biasanya menggunakan 2 byte.
    char charValue = 122; // Karakter yang diwakili oleh nilai ASCII 122 ('z').
    char charValue1 = 129; // Nilai overflow karena char biasanya hanya -128 hingga 127.
    unsigned char unsignedCharValue = 129; // Tidak overflow karena unsigned char bernilai 0-255.

    printf("%d\n", shortValue); // Menampilkan nilai shortValue.
    printf("%d, %d", charValue, charValue1); // Menampilkan nilai charValue dan charValue1.
    printf("\nunsigned value = %u", unsignedCharValue); // Menampilkan nilai unsignedCharValue.

    // Deklarasi variabel float
    float floatValue = 23.4f; // Nilai float dengan penulisan 'f' untuk menandai tipe float.
    float floatValue1 = 20; // Float tanpa 'f', akan di-cast secara implisit.
    float floatValue2 = 30; // Float lain untuk pembagian.

    float dividedValue; // Variabel untuk menyimpan hasil pembagian.

    printf("%f", floatValue); // Menampilkan floatValue dengan format float.
    dividedValue = floatValue1 / floatValue2; // Operasi pembagian antara floatValue1 dan floatValue2.
    printf("\n%.2f", dividedValue); // Menampilkan hasil pembagian dengan presisi 2 angka desimal.

    printf("\n%c", charValue); // Menampilkan karakter berdasarkan nilai ASCII dari charValue.

    // Penjelasan singkat tentang konstanta:
    // Konstanta adalah nilai yang tidak dapat diubah selama eksekusi program. Contohnya:
    // const int constValue = 100; // Variabel constValue tidak dapat diubah setelah didefinisikan.

    return 0;
}

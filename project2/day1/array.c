#include <stdio.h>

// Format umum untuk deklarasi array:
// data_type array_name[length];
// Contoh: int arr[5] = {1, 2, 3, 4, 5};
// Elemen array diakses dengan indeks mulai dari 0, misalnya: arr[0] = 1, arr[1] = 2, dst.

int main() {
    // Array satu dimensi
    int arr[6] = {0, 1, 2, 3, 4}; 
    // Array `arr` memiliki panjang 6, tetapi hanya 5 elemen yang diinisialisasi. 
    // Elemen terakhir akan memiliki nilai acak atau 0 tergantung compiler.

    printf("%d\n", arr[0]); // Menampilkan elemen pertama array (0).
    printf("%d\n", arr[5]); // Menampilkan elemen terakhir array (nilai acak jika tidak diinisialisasi).
    printf("%d", *(arr+2)); // Mengakses elemen ketiga (arr[2]) menggunakan pointer notation.

    int arr2[] = {5, 6, 7, 8}; // Deklarasi array tanpa panjang (otomatis dihitung dari jumlah elemen).
    printf("arr2[0] = %d, with its array size of = %d", arr2[0], sizeof(arr2)); // Menampilkan elemen pertama array dan total ukuran array (dalam byte).

    int arrLen = sizeof(arr2) / sizeof(arr2[3]); 
    // Menghitung jumlah elemen dalam array: total ukuran array dibagi ukuran satu elemen.
    printf("\nthe length of arr2[] = %d", arrLen); // Menampilkan panjang array arr2.
    printf("\n\nlength of the first array = %d", sizeof(arr) / sizeof(arr[0])); // Menghitung panjang array arr menggunakan cara serupa.

    // Array multidimensi
    // Deklarasi array 2D: int arr[baris][kolom].
    // Contoh: int twoDArr[3][4] memiliki 3 baris dan 4 kolom.
    int twoDArr[3][4] = { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} }; 
    // Elemen diakses dengan sintaks: twoDArr[baris][kolom].

    // Contoh lain: Array 2D dengan panjang kolom didefinisikan, tetapi jumlah baris otomatis dihitung.
    int twoDArr2[][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, 
                          {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20} };
    // Array `twoDArr2` memiliki 4 baris dan 5 kolom.

    // Mengakses elemen terakhir di baris terakhir (baris ke-3, kolom ke-4).
    printf("\nelement of the last row and column = %d", twoDArr2[3][4]);
    // Output: 20 (nilai elemen pada baris terakhir dan kolom terakhir).

    twoDArr2[3][4] = 10; 
    // Mengubah nilai elemen terakhir di baris terakhir menjadi 10.
    printf("\nelement of the last row and column after assigning new value = %d", twoDArr2[3][4]);
    // Output: 10 (nilai baru setelah diubah).

    return 0;
}

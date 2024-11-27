#include <stdio.h>

/*
    Penjelasan tentang jenis loop:

    1. **for loop**:
    for (initialize expression (1); test expression(2); update expression(4)) {
        // body of for loop (3)
    }
    Contoh: Digunakan untuk perulangan dengan batasan yang sudah jelas. Misalnya, dari 0 hingga 9.

    2. **while loop**:
    while (test expression) {
       // body consisting of multiple statements
    }
    Contoh: Digunakan untuk perulangan yang berjalan selama kondisi tertentu benar.

    3. **do-while loop**:
    do {
        // body of do-while loop    
    } while (condition);
    Contoh: Digunakan untuk perulangan yang harus dijalankan minimal sekali, meskipun kondisi salah.
*/

int main(){
    int a = 10;

    // Contoh penggunaan for loop
    // i++ akan mencetak angka dari 0 sampai 9
    int i = 0;
    for(; i < 10; i++, printf("%d ", i)) {
        ;
    }

    // Contoh penggunaan Bubble Sort dengan for loop
    int arr[5] = {10, 2, 5, 11, 3};
    int tmp;
    for (int i = 0; i < 5 - 1; i++) {  // Loop untuk mengurutkan array
        // Elemen-elemen yang sudah diurutkan diletakkan di akhir, jadi loop hanya berjalan sebanyak (n - i - 1)
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  // Swap jika elemen sebelumnya lebih besar
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    // Mencetak hasil setelah pengurutan
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // contoh penggunaan while loop
    while (a != 11) {
        printf("value of a = %d\nplease change value of a so it becomes 11 : ", a);
        scanf("%d", &a);  // Input dari pengguna untuk merubah nilai a
    }
    printf("thanks!");  // Akan mencetak "thanks!" setelah nilai a = 11

    a = 10;
    while (a < 10) {  // Karena a = 10, kondisi while salah, jadi loop tidak akan dijalankan
        printf("%d", a);
        a++;  // a bertambah satu pada setiap iterasi (tapi tidak dijalankan dalam kasus ini)
    }

    // Output untuk do-while loop
    do {
        printf("%d", a);  // Akan mencetak nilai a terlebih dahulu
        a++;  // a bertambah satu pada setiap iterasi
    } while (a < 10);  // Perulangan ini akan berhenti ketika a >= 10, karena kondisi adalah a < 10

    return 0;
}

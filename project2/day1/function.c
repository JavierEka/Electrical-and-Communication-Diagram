#include <stdio.h>

// Fungsi untuk menjumlahkan dua angka dan mengembalikan hasilnya
int sum(int a, int b) {
    int result = a + b;
    return result;  // Mengembalikan hasil penjumlahan
}

// Fungsi untuk menjumlahkan dua angka dan mencetak hasilnya langsung
void summation(int a, int b) {
    int result = a + b;  // Menghitung penjumlahan
    printf("result of x + y is = %d\n", result);  // Mencetak hasil
}

int main() {
    int x = 10, y = 20;
    
    // Menggunakan fungsi sum untuk menjumlahkan x dan y
    int result = sum(x, y);
    
    // Mencetak nilai x dan y
    printf("value of x = %d, value of y = %d\n", x, y);
    
    // Mencetak hasil penjumlahan menggunakan fungsi sum
    printf("summed value of both of them (x+y) = %d\n", result);

    // Menggunakan fungsi summation untuk langsung mencetak hasil penjumlahan
    summation(x, y);

    return 0;
}

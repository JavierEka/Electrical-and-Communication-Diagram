#include <stdio.h>

int x = 5, y = 10;  // Variabel global

// Fungsi untuk menukar nilai x dan y
void swap();

int main() {
    // swap(x, y); Harus dipanggil tanpa parameter dalam konteks ini karena swap tidak membutuhkan parameter
    // Memanggil fungsi swap yang menukar nilai x dan y
    swap();  // Memanggil fungsi swap untuk menukar nilai x dan y
    printf("x: %d, y: %d\n", x, y); // Hasilnya seharusnya x: 10, y: 5
    
    return 0;
}

void swap() {
    // Menyimpan nilai x ke dalam variabel sementara temp
    int temp = x;  
    // Mengatur x menjadi nilai y
    x = y;         
    // Mengatur y menjadi nilai yang ada dalam temp (nilai x)
    y = temp;      
}

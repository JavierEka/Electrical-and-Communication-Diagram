#include <stdio.h>

/*
    Operators : 
    ==  (a == b)   Membandingkan apakah `a` sama dengan `b`.
    !=  (a != b)   Membandingkan apakah `a` tidak sama dengan `b`.
    < , <= , > , >= Membandingkan apakah lebih kecil, lebih kecil sama dengan, lebih besar, atau lebih besar sama dengan.
    !   (!benar)   Negasi logika: mengubah `true` menjadi `false` dan sebaliknya.
    &&  Logical AND: Benar jika kedua pernyataan benar.
    ||  Logical OR: Benar jika salah satu pernyataan benar.

    Boolean: 0 berarti false, selain 0 berarti true.
*/

int main() {
    int a, b, c, d;
    a = 20, b = 30; // Memberikan nilai awal pada `a` dan `b`.
    printf("enter the value of c = "); // Meminta pengguna memasukkan nilai `c`.
    scanf("%d", &c); // Membaca nilai `c` dari input pengguna.
    
    // Contoh if-else sederhana
    if (a < c) { // Jika `a` lebih kecil dari `c`.
        printf("a is smaller than c\n");
    } else { // Jika kondisi sebelumnya salah.
        printf("a is bigger than c\n");
    }

    // Operator ternary
    // Mengganti if-else sederhana dengan syntax lebih singkat.
    (a < c) ? printf("a is smaller than c\n") : printf("a is not smaller than c\n");

    // if-else-if untuk beberapa kondisi
    if (a < c) {
        printf("a is smaller than c\n");
    } else if (a == c) {
        printf("a is equal to c\n");
    } else if (a > c) { // Bisa juga hanya menggunakan `else` tanpa kondisi tambahan.
        printf("a is bigger than c\n");
    }
    
    // Contoh logika nilai
    if (c > 50) { // Jika `c` lebih besar dari 50.
        printf("student c pass\n");
    } if (c > 50 && c < 70) { // Jika `c` antara 51 sampai 69.
        printf("student c gets a C\n");
    } if (c >= 70 && c < 80) { // Jika `c` antara 70 sampai 79.
        printf("student c gets a B\n");
    } if (c >= 80) { // Jika `c` lebih besar atau sama dengan 80.
        printf("student c gets an A\n");
    } else { // Jika semua kondisi di atas salah.
        printf("student c failed\n");
    }

    // Contoh OR logical operator
    printf("and the value of d = "); // Meminta nilai `d`.
    scanf("%d", &d); // Membaca nilai `d`.
    if ((c % 2 == 0) || (d % 2 == 0)) { // Jika salah satu dari `c` atau `d` genap.
        printf("at least one of them is an even number");
    } else { // Jika tidak ada yang genap.
        printf("none of them are even");
    }

    // Nested if
    if (c % 2 == 0) { // Jika `c` genap.
        printf("c is even\n");
        if (c > 10) { // Jika `c` lebih besar dari 10.
            printf("c is greater than 10\n");
        } else if (c < 10) { // Jika `c` lebih kecil dari 10.
            printf("c is smaller than 10\n");
        } else if (c == 10) { // Jika `c` sama dengan 10.
            printf("c is equal to 10\n");
        }
    } else if (c % 2 != 0) { // Sama seperti `else if (!(c % 2 == 0))`. Jika `c` ganjil.
        printf("c is odd\n");
        if (c > 10) { // Nested untuk kondisi ganjil.
            printf("c is greater than 10\n");
        } else if (c < 10) {
            printf("c is smaller than 10\n");
        } else if (c == 10) {
            printf("c is equal to 10\n");
        }
    }

    // Switch case untuk menentukan hari dalam seminggu berdasarkan nilai `c`.
    printf("assume c represents which day of the week\nc is ");
    switch (c) {
        case 1:
            printf("Monday"); // Jika `c` adalah 1, output: Monday.
            break;
        case 2:
            printf("Tuesday"); // Jika `c` adalah 2, output: Tuesday.
            break;
        case 3:
            printf("Wednesday"); // Jika `c` adalah 3, output: Wednesday.
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default: // Jika `c` tidak di antara 1 dan 7.
            printf("Invalid Input");
            break;
    }
    */

    return 0; // Mengembalikan 0 untuk menunjukkan bahwa program berjalan sukses.
}

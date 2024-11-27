# Introduction to C Languange

## Dasar Bahasa C
  **File C** : [DASAR](project2/day1/newFile.c)

  ### Implementasi
    #include <stdio.h>

    int main() {
      printf("Hello, World!");

      return 0;
    }

## Tipe Data dan Variabel
  **File C** : [TIPE DATA DAN VARIABEL1](project2/day1/dataTypeAndVariable0.c) & [TIPE DATA DAN VARIABEL2](project2/day1/dataTypeAndVariable1.c)

  ### Implementasi
    #include <stdio.h>
  
    int main() {
      int a = 5;
      float b = 3.14;
      char c = 'A';

      printf("Integer: %d\n", a);
      printf("Float: %.2f\n", b);
      printf("Character: %c\n", c);

      return 0;
    }
  ### Kesulitan
  Masih Kesulitan di Basis dan Nilai Overflow

## Array
  **File C** : [ARRAY](project2/day1/array.c)

  ### Implementasi
    #include <stdio.h>

    int main() {
      int arr[5] = {10, 20, 30, 40, 50};

      printf(%d\n",arr[i]);

      return 0;
    }

  ### Kesulitan
  Masih Kesulitan untuk Memanipulasi Array Seperti Mengabungkan Dua Array Menjadi Satu Array

## Character
  **File C** : [CHARACTER](project2/day1/char.c)

  ### Implementasi
    #include <stdio.h>

    int main() {
      char c = 'A';
      printf("Character: %c\n", c);
      printf("Value ASSC dari %c: %d\n", c, c);

      return 0;
    }
  ### Kesulitan
  Masih Kesulitan Untuk Memanipulasi String Seperti Uppercase atau Lowercase

## Operator
  **File C** : [OPERATOR](project2/day1/operators.c)

  ### Implementasi
    #include <stdio.h>

    int main() {
      int a = 5, b = 3;

      printf("Penjumlahan: %d\n", a + b);
      printf("Pengurangan: %d\n", a - b);
      printf("Perkalian: %d\n", a * b);
      printf("Pembagian: %d\n", a / b);
      printf("Modulus: %d\n", a % b);

      return 0;
    }

## Percabangan
  **File C** : [PERCABANGAN](project2/day1/ifElse.c)

  ### Implementasi
    #include <stdio.h>

    int main() {
      int a = 5;

      if (a != 10) {
        printf("a bukan 10\n");
      } else {
        printf("a adalah 10\n");
      }

      return 0;
    }

## Perulangan
  **File C** : [PERULANGAN](project2/day1/for.c)

  ### Implementasi
    include <stdio.h>

    int main() {
      for (int i = 1; i < 10; i += 2) {
        printf("Bilangan Ganjil : %d\n", i);
     }

      return 0;
    }
  ### Kesulitan
  Masih Kesulitan Memahami logika perulangan dan kontrol perulangan seperti kondisi berhenti dan cara mengubah nilai dalam iterasi. Apalagi Apabila ditambahkan input dalam Loop tersebut

## Fungsi
  **File C** : [FUNGSI 1](project2/day1/function.c) & [FUNGSI 2](project2/day1/function2.c)

  ### Implementasi
    #include <stdio.h>

    void genap(int start, int end) {
      for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
          printf("Bilangan Genap: %d\n", i);
        }
      }
    }

    int main() {
      int start = 1, end = 10;
      genap(start, end);

      return 0;
    }
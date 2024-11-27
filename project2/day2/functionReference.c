#include <stdio.h>
// int x =5,y=10;
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y); //we need to Pass references (addresses) of x and y
    printf("x: %d, y: %d\n", x, y); //result should be x: 10, y: 5
    return 0;
}

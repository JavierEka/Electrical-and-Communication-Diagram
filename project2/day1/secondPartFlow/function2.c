#include <stdio.h>
int x =5,y=10;
void swap();

int main() {
    // int x = 5, y = 10;
    // swap(x, y); //we need to Pass references (addresses) of x and y
    printf("x: %d, y: %d\n", x, y); //result should be x: 10, y: 5
    return 0;
}

// void sum(int x,y)
void swap() {
    int temp = x;
    x = y;
    y = temp;
}
#include <stdio.h>

int sum(int a, int b){
    int result = a +b;
    return result; //or we can just do return a + b ;
}

void summation(int a , int b){
    int result = a +b; //we can alo use the sum function before making it a function inside a function
    printf("result of x + y is = %d\n",result);
}

int main(){
    int x = 10, y = 20;
    int result = sum(x,y);
    printf("value of x = %d, value of y = %d\n",x,y);
    // printf("summed value of both of them (x+y)= %d",result);
    summation(x,y);

    return 0;
}
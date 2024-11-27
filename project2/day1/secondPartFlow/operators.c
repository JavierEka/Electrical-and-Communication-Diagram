#include <stdio.h>

/*  
Arithmetic Operator :
    + (addition) 2 + 3 = 5
    - , *, / 
    % (modulus) = to calculate the remainder of a divided value 
        ex : 5 % 2 =  1
             2 % 4 =  2
*/

int main(){
    /*
    //modulus
    int a = 5, b = 2, c = 4 ;
    printf("5 %% 2 equals to = %d",a%b); printf("\n2 %% 4 equals to = %d",b%c);
    //*/

    ///*
    //increment and decrement = a++,++a,i--,--i
    //++a means increment first then use the value,  a++ means use the value then increment
    int a = 1;
    a++;
    printf("%d\n",a);

    int b  =  1;
    printf("%d\n",b++);
    printf("%d\n",b);

    int c = 1;
    printf("%d\n",++c);
    // printf("%d\n",--c);
    //*/

    /*
    //assignment operators
    int a = 1;
    printf("value of a : %d\n",a);
    a += 2; //means a = a + 2 ( a = 1 + 2)
    printf("value of a+=2 : %d",a);
    //*/
}
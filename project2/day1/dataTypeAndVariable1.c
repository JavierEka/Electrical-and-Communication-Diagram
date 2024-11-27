#include <stdio.h>
#include <stdint.h> //segment on checking the documentation of said standard library

int main(){
    // uint8_t eightBitVariable = 250; //when we only need a variable that have a maximum value of 255
    //                                 //we can save memory by only using that said amount of memory size
    // unsigned int unsignedInt = 255; 

    // printf("%d, size of eightBitVariable : %d",eightBitVariable,sizeof(eightBitVariable));
    // printf("\n%d, size of the unsignedIt : %d \n",unsignedInt,sizeof(unsignedInt));

    ///*
    int integer1;
    printf("enter a number : ");
    scanf("%d",&integer1);
    printf("integer1 is = %d",integer1);
    ///*
}
#include <stdio.h>

int main(){
    // int a = 10;
    // int* ptr = &a; //declares a variable that will store the address of a

    // printf("%d\n",ptr);//prints the address of a in memory
    // printf("%d\n",&a); //prints the address of it in memory

    // printf("%d\n",*ptr); //assume the asterisk(*) in this one different than when it was first declared 
    // printf("%d\n",&ptr); //the address of the pointer

    // //changing the value with the pointer
    // // ptr = 23; // this will change the address not the content of it
    // *ptr = 23; //this is the correct way of changing the content of the pointer
    // printf("address of ptr in memory : %d\n",ptr);//prints the address of a in memory
    // printf("the content of it : %d\n",*ptr);
    // printf("content of a in memory : %d\n",a);

    // printf("\narray is also a pointer\n");
    // int arr[3] ={10,2,5}; 
    // printf("%d %d\n",arr, &arr[0]);
    // // printf("%d %d\n",arr+1, &arr[1]);

    // *(arr+1) = 23; 
    // printf("%d",arr[1]);

    // char* string = "hello World!";
    // printf("%s\n",string);

    // int* array = {10,2,3};
    // printf("%d",array);

    // char string
    // printf("%d",)

    int x = 100;
    int* ptr1 = &x;
    int** ptr2 = &ptr1;

    printf("value of x = %d\n",x);
    printf("value of ptr1 = %d\n",*ptr1);
    printf("address of ptr1 = %d\n",ptr1);
    printf("value of ptr2 = %d\n",*ptr2);
    printf("address of ptr2 = %d\n",ptr2);
    printf("value of doubly-derefrenced ptr2 = %d\n",**ptr2);
    
    // printf("changing value of **ptr2 to 10\n");
    // //changing value of **ptr2
    // **ptr2 = 10;
    // printf("value of x = %d\n",x);
    // printf("value of ptr1 = %d\n",*ptr1);
    // printf("value of doubly-derefrenced ptr2 = %d\n",**ptr2);

}
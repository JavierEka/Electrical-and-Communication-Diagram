#include <stdio.h>


//data_type array_name [length];
//int       arr        [5]   = { 1,2,3,4,5 } 1 = arr[0]
//arr[0] = 1, arr[1] = 2, arr[2] = 3, arr[3] = 4, arr[4] = 5;         

int main(){
    /*
    int arr[6] = {0,1,2,3,4}; //the last element of the array suppose to be random or 0
    // printf("%d\n",arr[0]);
    // printf("%d\n",arr[5]);
    // printf("%d",*(arr+2)); //will be explained in the next session arr[2]

    int arr2[] = {5,6,7,8};
    printf("arr2[0] = %d, with its array size of = %d",arr2[0],sizeof(arr2));
    int arrLen = sizeof(arr2)/sizeof(arr2[3]);
    printf("\nthe length of arr2[] = %d",arrLen);  
    printf("\n\nlength of the first array = %d",sizeof(arr)/sizeof(arr[0]));
    */

    ///*

    //multidimensional Array == int arr[3][4] 3 rows and 4 columns
    int twoDArr[3][4] = { {0,1,2,3} , {4,5,6,7} , {8,9,10,11}};
    int twoDArr2[][5] = {{1,2,3,4,5} , {6,7,8,9,10} , {11,12,13,14,15} , {16,17,18,19,20}};
    // printf("%d",twoDArr2[][5]);
    printf("\nelement of the last row and column = %d",twoDArr2[3][4]);
    twoDArr2[3][4] = 10;
    printf("\nelement of the last row and column after assigning new value= %d",twoDArr2[3][4]);
    //*/
}
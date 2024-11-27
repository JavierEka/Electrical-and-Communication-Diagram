#include <stdio.h>

int main(){

    // char charArray[5] ={'a','r','u','n','d'};
    // char charArray[6] ={'a','r','u','n','d'}; //secret '\0'
    // // char string[6]= "arund";
    // printf("%s\n",charArray); //more like printing the address
    // printf("%c\n",charArray[0]);
    // printf("%c\n",charArray[5]); 

    // char string1 [6] = "Hello"; //there is an implicit character called the null terminator '\0'
    //we can check this by defining a character array with no length defined;
    // char stringHello [] = "Hello"; // 'H'(1) 'e'(2) 'l'(3) 'l'(4) 'o'(5) '\0'(6)

    // printf ("%d\n",sizeof(stringHello));
    // printf("%c",stringHello);
    // printf("%s\n",stringHello);

    char stringArray[][6] = {"Arund","Taib","Anton"};
    printf("%s",stringArray[2]);

}
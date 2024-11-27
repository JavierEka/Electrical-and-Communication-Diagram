#include "stdio.h" 

/*
    Format Specifiers :
    %d or %i for signed integer ( 4 bytes usually)
    %u unsigned integer (4)
    %ld %li long signed integer (8)
    %lu unsigned long integer (8)
    %f float (4) (23 bits mantissa)
    %lf double (8) (52 bits mantissa), %Lf long double
    %c for char (1) , %s for string

    // little segment on binary and its families
    1001(base 2) = 11(base 8 ) = 9 (base 16) = 9 (base 10) 
    11 (base 10) = B (base 16)

    Base 2 = 0 and 1 for 1 digit of its value (its main use is to represent all things in computer)
    Base 8 = 0 to 7 for 1 digit of its value
    base 16 = 0 1 2 3 4 5 6 7 8 9 A B C D E F for 1 digit of its value
    Base 10 (decimal) = 0 to 9 for 1 digit of its value (standard human counting representation)

    (left = base n, right = base 10)
    Base 2 (111 3 bits) = 7 , 101 = 5 , 000001 = 1
    Base 8 (7)   = 7 , 10  = 8 , 000010 = 8
    base 16 (F)  = 15, FF  = 255, 
    
    //convert any base to decimal = 

    Hexa and binary characteristics
    1 digit max of hexa value (F) is exactly the max value of a 4 bit binary value
    F = 1111
    FF = 1111 1111 = 255 1 byte
*/
int main()
{
    // //dataType variableName = value;
    // ///*
    // short shortValue = 25;
    // char charValue = 122;  // slides to overflow stuff
    // char charValue1 = 129; 
    // unsigned char unsignedCharValue = 129;

    // printf("%d\n",shortValue);
    // printf("%d, %d",charValue, charValue1);
    // printf("\nunsigned value = %u",unsignedCharValue);
    // //*/

    
    
    float floatValue = 23.4f;
    float floatValue1 = 20;
    float floatValue2 = 30;

    float dividedValue;

    printf("%f", floatValue);
    dividedValue = floatValue1/floatValue2;
    printf("\n%.2f",dividedValue);
    
    /*
    printf("\n%c",charValue); //check ASCII
    //*/
    
    //explain a little about constant
    return 0;
}
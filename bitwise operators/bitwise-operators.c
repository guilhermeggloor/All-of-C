#include <stdio.h>

int main()
{   
    //  BITWISE OPERATORS = special operators used in bit level programming
    //                      (knowing binary is important for this topic)

    //& = AND -> both 1 we assing 1, both 0 stay 0 
    // | = OR -> only one of the bits need's to be 1 to assign 1 to the result
    // ^ = XOR -> only ONE of the bits can be 1, both bits = 1 stay 0, both bits are 0 stay 0
    // << left shift -> shift the bits one spot to the left
    // right shift -> shift the bits one spot to the right

    int x = 6;  // 6 = 00000110
    int y = 12; //12 = 00001100
    int z = 0;  //0 =  00000000 , 
    //            4 = 00000100, 
    //           14 = 00001110, 
    //           10 = 00001010, 
    //           12 = 00001100, 
    //           24 = 00011000, 
    //            3 = 00000011, 
    //            1 = 00000001  
    
    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);

    z = x ^ y;
    printf("XOR = %d\n", z);

    z = x << 2;
    printf("SHIFT LEFT = %d\n", z);

    z = x >> 2;
    printf("SHIFT RIGHT = %d\n", z);

    return 0;
}
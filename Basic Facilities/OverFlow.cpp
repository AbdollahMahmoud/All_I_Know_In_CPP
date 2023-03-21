#include <iostream>

int main(void)
{
    /*A*/
    unsigned int b = 0b11111111111111111111111111111111;
    b+=2;
    std::cout<<b<<std::endl;

    //unsigned char a = 61455; //0b1111000000001111
    //std::cout<<a;

    /*B*/
    unsigned u1 = 10, u2 = 42;
    int i1 = 10, i2 =42, i3 = i1 - i2;
    std::cout<< u1 - u2<<std::endl;
    //10-42=-32 => unsigned => -32 % 2^32 = 4,294,967,264
    std::cout<< i1 - i2<<std::endl;
    //-32 => signed => -32
    std::cout<< i3<<std::endl;
    printf("%x", i3);




    return 0;
}
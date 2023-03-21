#include <iostream>

int main(void)
{
    unsigned int a = 0b11111111111111111111111111111111;
    long long b = 0;
    b = a + 1;
    std::cout<<b;
    b = (long long)a + 1;
    std::cout<<b;
    return 0;
}
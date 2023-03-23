#include <iostream>

int main(void)
{
    int a = 0b11111111111111111111111111111111; //2^32 - 1 = 4,294,967,295
    long long b = 0;  //max = 2^64 - 1 = 18,446,744,073,709,551,615
    unsigned UNSIGNED = 1;
    b = a + UNSIGNED; //unsigned tempVar = (unsigned)a + UNSIGNED => tempVar = 4,294,967,295 +1 => overflow => tempVar = 0
    std::cout<<b<<" "<<sizeof(long long)<<std::endl; //b = tempVar; => b = 0;
    b = (long long)a + UNSIGNED; //long long tempVar = a + (long long)1 => temVar = 4,294,967,296
    std::cout<<b; //b = tempVar; => b = 4,294,967,296;
    return 0;
}
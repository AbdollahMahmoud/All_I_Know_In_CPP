#include <iostream>
#include <string>

int main(void){
    char a[] = "a";
    char b = 'b';
    std::cout<<a[1]<<" "<<b;
    std::cout<<L"a";

    /*B*/
    int month1 = 9, day1 = 7;
    //int month2 = 09, day2 = 07; Error => Octal ==> 0:7
    int month3 = 17, day3 = 06;
    std::cout<<std::endl<<month1<<month3<<day1<<day3<<std::endl;
    printf("%o", month3); //=>0o17 = 21

    return 0;
}
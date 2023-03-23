#include <iostream>

int main(void)
{
    /*value init*/
    int a {5};
    char b{97};
    //std::cout<<a<<" "<<b<<std::endl;

    /*Unused attribute*/
    [[maybe_unused]] int x { 5 };

    return 0;
}
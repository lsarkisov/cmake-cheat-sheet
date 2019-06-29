#include <iostream>
#include <hello/hello.h>

int main()
{
    Hello hello("This is my message");

    std::cout << hello.getMsg() << std::endl;
    return 0;
}
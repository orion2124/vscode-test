#include <iostream>

void test()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void branchFuc()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int main()
{
    test();
    branchFuc();
    std::cout << "hello world" << std::endl;

    return 0;
}
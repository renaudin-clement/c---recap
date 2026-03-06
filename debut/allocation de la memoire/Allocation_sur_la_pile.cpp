
#include <iostream>
short int f1()
{
    int d = 4;
    int e;
    return d;
}

short int f2(short int a)
{
    int c = a + f1();
    a += 2;
    return c;
}

int main()
{
    short int x = 3;
    short int y = 5;
    y = f2(x);
    std::cout << y << std::endl;
    f1();
    std::cout << f1() << std::endl;
}
#include <iostream>

int main()
{
    int n = 0;
    std::cout << "n=" << n << std::endl;
    int *pointeur = &n;
    *pointeur = 5; // effet : n=5
    std::cout << "sorti pointeur* n=" << *pointeur << std::endl;
    std::cout << "sorti n n=" << n << std::endl;
    return 0;
}


#include <iostream>

int main()
{
    // Code 1 (lisibilité)
    //int tableau[1000];
    int tableau[10] = {0,1,2,3,4,5,6,7,8,9};
    int somme = 0;
    for (int i = 0; i < 10; i++)
    {
        somme += tableau[i];
        std::cout << "tableau =" << tableau[i] << std::endl;
    }
    std::cout << "somme =" << somme << std::endl;

    return 0;
}
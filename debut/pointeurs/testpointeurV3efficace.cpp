
// Code 2 (efficacité*)

#include <iostream>

int main()
{
    std::cout << "code efficace" << std::endl;

    //int tableau[10];
    int tableau[10] = {0,1,2,3,4,5,6,7,8,9};
    int somme = 0;
    int *fin = tableau + 10; // pointe sur l’element suivant le dernier element
    for (int *i = tableau; i < fin; i++){
        somme += *i;
        std::cout << "tableau =" << *i << std::endl;
    }
    std::cout << "somme =" << somme << std::endl;
}
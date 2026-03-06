#include <fstream>
#include <iostream>

int main(int argc, char** argv)
{
    int a, b;
    std::ifstream in("debut/entreesortie/nombres.txt");

    if (!in) {
        std::cout << "Erreur ouverture fichier nombres.txt" << std::endl;
        return 1;
    }

    std::cout << "Lire deux nombres:" << std::endl;
    in >> a >> b;

    std::cout << "lecture fichier nombres.txt \n a = " << a << " \n b = " << b << std::endl;

    int somme = a + b;

    std::ofstream out("debut/entreesortie/somme.txt");
    out << somme << std::endl;

    std::cout << "voir le fichier somme si le resultat est bien " << somme << std::endl;

    return 0;
}
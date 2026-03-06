#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    int a, b;
    cout << "Entrez le premier nombres:" << endl;
    cin >> a;
    cout << "Entrez le deuxieme nombres:" << endl;
    cin >> b;
    int somme = a + b;
    cout << "La somme est " << somme << endl;

    return 1;
}
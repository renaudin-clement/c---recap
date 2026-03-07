class FormeGeometrique
{
public:
    virtual double aire() = 0;
};





class Carre : public FormeGeometrique
{
public:
    Carre(double dimension) : m_dimension(dimension) {}
    virtual double aire() { return m_dimension * m_dimension; }

protected:
    double m_dimension;
};






class Rectangle : public FormeGeometrique
{
public:
    Rectangle(double h, double l) : m_hauteur(h), m_largeur(l) {}
    virtual double aire() { return m_hauteur * m_largeur; }

protected:
    double m_hauteur, m_largeur;
};





class A
{
public:
    int f(int v = 0);

private:
    int a;
};
int A::f(int v)
{
    int t = this->a; // t=a
    this->a = v;     // a=v
    return a;
}





#include <iostream>
using namespace std;

int main() {
    // Test des formes géométriques
    Carre c(5); // carré de côté 5
    Rectangle r(3, 4); // rectangle de 3x4

    cout << "Aire du carré : " << c.aire() << endl;       // 25
    cout << "Aire du rectangle : " << r.aire() << endl;  // 12

    // Test de la classe A
    A obj;
    cout << "Valeur renvoyée par f(10) : " << obj.f(10) << endl; // 10
    cout << "Valeur renvoyée par f() : " << obj.f() << endl;      // 0 (car défaut = 0)

    return 0;
}
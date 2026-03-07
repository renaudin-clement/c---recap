// =============================================================
//  Exemple C++ : Classes, Constructeurs & Gestion de mémoire
// =============================================================

#include <iostream>

// =============================================================
//  CLASSE Point
// =============================================================

class Point
{
public:
    Point();                   // constructeur sans argument
    Point(double x, double y); // constructeur avec arguments
    void afficher() const;

private:
    double x, y;
};

// Constructeur sans argument : initialise à (0, 0)
Point::Point()
{
    x = y = 0.0;
}

// Constructeur avec liste d'initialisation
// Le ":" sert à initialiser les membres avant l'entrée dans le corps
Point::Point(double x_, double y_)
    : x(x_), y(y_) // <── liste d'initialisation
{
    // corps vide : tout est déjà fait ci-dessus
}

void Point::afficher() const
{
    std::cout << "(" << x << ", " << y << ")\n";
}

// =============================================================
//  CLASSE Tableau10int  (avec gestion de mémoire dynamique)
// =============================================================

class Tableau10int
{
public:
    Tableau10int();  // constructeur : alloue la mémoire
    ~Tableau10int(); // destructeur  : libère la mémoire

    void set(int i, int val);
    int get(int i) const;

private:
    int *elements; // pointeur vers le tableau alloué dynamiquement
};

// Constructeur : alloue 10 entiers sur le tas et les initialise à 0
Tableau10int::Tableau10int()
{
    elements = new int[10]; // allocation dynamique
    for (int i = 0; i < 10; i++)
        elements[i] = 0;
}

// Destructeur : appelé automatiquement en fin de vie de l'objet
Tableau10int::~Tableau10int()
{
    delete[] elements; // libération obligatoire !
    elements = nullptr;
}

void Tableau10int::set(int i, int val) { elements[i] = val; }
int Tableau10int::get(int i) const { return elements[i]; }

// =============================================================
//  PROGRAMME PRINCIPAL
// =============================================================

int main()
{

    // ── Classe Point ─────────────────────────────────────────
    std::cout << "=== Classe Point ===\n";

    Point p1;           // appelle Point()       → (0, 0)
    Point p2(3.0, 4.0); // appelle Point(x_, y_) → (3, 4)

    std::cout << "p1 = ";
    p1.afficher(); // (0, 0)
    std::cout << "p2 = ";
    p2.afficher(); // (3, 4)

    // ── Classe Tableau10int ───────────────────────────────────
    std::cout << "\n=== Classe Tableau10int ===\n";

    Tableau10int t; // constructeur appelé → new int[10]
    t.set(0, 42);
    t.set(5, 99);

    std::cout << "t[0] = " << t.get(0) << "\n"; // 42
    std::cout << "t[5] = " << t.get(5) << "\n"; // 99

    // À la fin du bloc, ~Tableau10int() est appelé → delete[]
    return 0;
}

// Compilation : g++ -std=c++11 -o exemple exemple_classes.cpp
// Exécution   : ./exemple
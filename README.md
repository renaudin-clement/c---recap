
# apprentissage C++
## commande

### compilation
    g++ cours1.cpp -o exo1

### Executer
    ./exo1


## Déclaration vs Définition

### Déclaration
La compilation se fait en une seule passe (excluant l’édition des
liens).
Tout doit être déclaré avant d’être utilisé.
Une déclaration ne fait que déclarer l’existence de quelque chose
lié à un identificateur (symbole). Exemples : variables, fonctions,
classes, etc.



###  Définition
La définition est le code des functions, constructeurs, etc.
Après la compilation, il y a une passe d’édition des liens (linker).
Tout symbole utilisé doit être défini à l’édition des liens.

---
#### Pour faire simple 

.cpp = definition et .hpp = declaration 

---

### executer plusier fichier relier a h
> g++ appelleallo.cpp allo.cpp -o exo1

ou plus rapide 
> g++ *.cpp -o exo1

## Structure et type

### type de parametre
    void, bool, char, short int, int, long, float, double unsigned

### Boucles et instructions de contrôle
    if, else, while, do, for, switch ... case


### Structures
    class, struct, union


#### petit rappelle

##### Declaration
> int a;

#####  Affectation
> a = 2 + 10;

## les tableaux

def taille indefini
int tableau3[] = {0, 5, 10, 15, 20};

def taille defini
int tableau1[5] = {0, 5, 10, 15, 20};
int tableau2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

## les Pointeurs

Dans la déclaration de variable, la porté d’un symbole étoile * se limite à une variable.

#### symbole
type* = pointeur de type type
type** = pointeur vers un pointeur utiliser principalement pour les tableaux  

&nom = adresse memoire de nom

int n = 3;
int* ptr_n = &n;         // ptr_n contient l'adresse de n
int* tableau = new int[100];  // alloue 100 entiers en mémoire dynamique

#### Declare le pointeur p1 et l’objet o1
int∗ p1, o1;

####  Declare les pointeurs p2, p3, p4 et l’objet o2
int ∗p2, ∗p3, o2, ∗p4;


#### Déférencement de pointeurs
Déférencer = aller chercher (le contenu de) la case mémoire

int n=0;
int ∗pointeur = &n;
∗pointeur = 5; // effet : n=5
std::cout << "n=" << ∗pointeur << std::endl;


#### Références de pointeurs

int n = 2;
int& ref_n = n;
n = 3;
std::cout << "ref_n=" << ref_n << std::endl;



## Entrée standard et sortie standard

Pour avoir accès aux flux standards de la bibliothèque standard de C++,
il faut inclure le fichier d’entête iostream. Ce dernier définit les trois
flux suivant :  
- std::cin : flux d’entrée depuis l’entrée standard (stdin) ;  
- std::cout : flux de sortie vers la sortie standard (stdout) ;  
- std::cerr : flux de sortie vers la sortie d’erreurs (stderr ). 

## Allocation mémoire
    - Automatique (fait automatiquement par le compilateur).
    - Dynamique (allouée explicitement sur le tas (heap)).
    - Toute mémoire allouée dynamiquement doit être libérée
    - dynamiquement.
    - Algorithmes d’allocation/libération (dépendant du
    - compilateur/système d’exploitation).
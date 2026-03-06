# compilation
 g++ cours1.cpp -o exo1

# Executer
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
g++ appelleallo.cpp allo.cpp -o exo1

ou plus rapide 
g++ *.cpp -o exo1
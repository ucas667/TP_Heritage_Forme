// Heritage_formes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "rectangle.h"
#include "triangle.h"
#include "carre.h"
#include "octogoneRegulier.h"
#include "CCercle.h"
using namespace std;


void partie1() {
    cout << "\n--- PARTIE 1 ---" << endl;

    
    CRectangle rectangle("Mon Rectangle", 10, 5);
    CTriangle triangle("Mon Triangle", 6, 4);
    CCarre carre(5);
    COctogoneRegulier octogone("Mon Octogone", 3);

    
    rectangle.afficher();
    cout << "Surface calculee : " << rectangle.surface() << endl << endl;

    
    triangle.afficher();
    cout << "Surface calculee : " << triangle.surface() << endl << endl;

  
    carre.afficher();
    cout << "Surface calculee : " << carre.surface() << endl << endl;

    
    octogone.afficher();
    cout << "Surface calculee : " << octogone.surface() << endl << endl;
}
// fonctions de test à coder
void partie2() {
    cout << "\n--- PARTIE 2 ---" << endl;

    CForme* ptr;

    ptr = new CRectangle("Rectangle Dynamique", 10, 5);

    ptr->afficher();
    cout << "Surface via pointeur : " << ptr->surface() << endl;

    delete ptr;
}
void partie5() {
    cout << "\n--- PARTIE 5 ---" << endl;

    CForme* tableau[5];

    tableau[0] = new CRectangle("Rectangle Polymorphisme", 10, 5);
    tableau[1] = new CCarre(5);
    tableau[2] = new CTriangle("Triangle Polymorphisme", 6, 4);
    tableau[3] = new COctogoneRegulier("Octogone Polymorphisme", 3);
    tableau[4] = new CCercle("Cercle Polymorphisme", 5.0); 

    for (int i = 0; i < 5; i++) {
       
        tableau[i]->afficher();

        cout << "Surface calculee : " << tableau[i]->surface() << endl << endl;
    }

    for (int i = 0; i < 4; i++) {
        delete tableau[i];
    }
}
/// etc...

int main()
{
    std::cout << "Test des classes formes\n";

	partie1();
    partie2();
	partie5();
	return 0;
}







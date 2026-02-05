// Heritage_formes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "rectangle.h"
#include "triangle.h"
#include "carre.h"
#include "octogoneRegulier.h"

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
/// etc...

int main()
{
    std::cout << "Test des classes formes\n";

	partie1();
    partie2();
	return 0;
}







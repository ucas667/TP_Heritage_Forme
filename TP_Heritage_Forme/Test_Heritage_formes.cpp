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

    
    rect.afficher();
    cout << "Surface calculee : " << rect.surface() << endl << endl;

    
    tri.afficher();
    cout << "Surface calculee : " << tri.surface() << endl << endl;

  
    carr.afficher();
    cout << "Surface calculee : " << carr.surface() << endl << endl;

    
    octo.afficher();
    cout << "Surface calculee : " << octo.surface() << endl << endl;
}
// fonctions de test à coder
void partie2() {
/// etc...

int main()
{
    std::cout << "Test des classes formes\n";

	partie1();

	return 0;
}





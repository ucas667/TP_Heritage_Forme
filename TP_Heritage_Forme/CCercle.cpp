#include "CCercle.h"
#include <iostream>
#include <cmath> 

using namespace std;

CCercle::CCercle(string _nom, double _rayon) : CForme(_nom) {
    this->rayon = _rayon;
}
void CCercle::afficher() {
    CForme::afficher();
    cout << "Rayon : " << rayon << endl;
}
double CCercle::surface() {
    return 3.14 * rayon * rayon;
}



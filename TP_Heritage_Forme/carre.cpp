///////////////////////////////////////////////////////////
//  carre.cpp
//  Implementation of the Class CCarre
//  Created on:      20-janv.-2026 10:11:05
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "carre.h"
#include <iostream>


CCarre::CCarre(){

}



CCarre::~CCarre(){

}


CCarre::CCarre(int _cote) : CRectangle("Carre", _cote, _cote) {
	this-> cote = _cote;
}


void CCarre::afficher(){
	CForme::afficher();
	cout << "Cote : " << cote << endl;
}

double CCarre::surface(){

	return cote * cote;
}






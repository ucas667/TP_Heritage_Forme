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


CCarre::CCarre(int _cote) : CCRectangle("Carre", cote, cote) {

}


void CCarre::afficher(){
	Cforme::afficher();
	count << "Côté : " << cote << endl;
}

double CCarre::surface(){

	return 0;
}




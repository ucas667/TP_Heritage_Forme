///////////////////////////////////////////////////////////
//  OctogoneRegulier.cpp
//  Implementation of the Class OctogoneRegulier
//  Created on:      20-janv.-2026 10:20:48
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "OctogoneRegulier.h"
#include <cmath>
#include <iostream>

COctogoneRegulier::COctogoneRegulier(){

}



COctogoneRegulier::~COctogoneRegulier(){

}

/**
 * Affiche le nom de la forme
 */
void COctogoneRegulier::afficher(){
	Cforme::afficher();
	cout << "Côté : " << cote << endl;
}


/**
 * constructeur qui initialise le nom de la forme
 */
COctogoneRegulier::COctogoneRegulier(string _nom, int _cote) : CForme(nom) {
	this->cote = _cote;
}

double COctogoneRegulier::surface(){

	return 2* (1 + sqrt(2)) * cote * cote;
}




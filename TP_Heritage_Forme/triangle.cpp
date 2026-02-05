///////////////////////////////////////////////////////////
//  triangle.cpp
//  Implementation of the Class CTriangle
//  Created on:      20-janv.-2026 10:08:10
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "triangle.h"
#include <string>
#include <iostream>

CTriangle::CTriangle(){

}



CTriangle::~CTriangle(){

}


CTriangle::CTriangle(string nom, int _hauteur, int _base) : CForme(nom) {
	this->hauteur = _hauteur;
	this->base = _base;

}


void CTriangle::afficher(){
	CForme::afficher();
	cout << "Hauteur : " << hauteur << endl;
	cout << "Base : " << base << endl;
}


double CTriangle::surface(){

	return (base * hauteur) / 2.0;
}





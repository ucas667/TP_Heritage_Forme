///////////////////////////////////////////////////////////
//  rectangle.cpp
//  Implementation of the Class CRetangle
//  Created on:      20-janv.-2026 10:20:43
//  Original author: Utilisateur
///////////////////////////////////////////////////////////

#include "rectangle.h"
#include <string>
#include <iostream>	

CRectangle::CRectangle(){

}



/**
 * constructeur prends le paramètre "nom" de la classe de base et les deux
 * paramètres "longueur" et "largeur" propres à la classe CRectangle
 */
CRectangle::CRectangle(string nom, int _largeur, int _longueur) : CForme(nom) {
	this->largeur = _largeur;
	this->longueur = _longueur;
}


CRectangle::~CRectangle(){

}


/**
 * affiche le nom, la longueur, la largeur et la surface du rectangle
 */
void CRectangle::afficher(){
	Cforme::afficher();
	cout << "Longueur : " << longeur << endl;
	cout << "Largeur : " << largeur << endl;
}



/**
 * retourne la surface du rectangle
 */
double CRectangle::surface(){

	return largeur * longeur;
}



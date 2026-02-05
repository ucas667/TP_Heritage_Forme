#pragma once
#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"

class CCercle : public CForme {
public:
    CCercle(string _nom, double _rayon);

    void afficher();
    double surface();

private:
    double rayon; 
};

#endif



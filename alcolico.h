#ifndef ALCOLICO_H
#define ALCOLICO_H
#include<iostream>
#include "vettore.h"
#include "ingrediente.h"
#include "carrello.h"
typedef unsigned int u_int;

class Alcolico : public Bevanda{
public:
    Alcolico();
    Alcolico(u_int g);
    // virtual Vettore<Bevanda> crea(Carrello c /* ? Vettore<ingredienti> */);
    virtual u_int getGradazione()const;
    
};

#endif // ALCOLICO_H

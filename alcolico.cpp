#include <iostream>
#include "alcolico.h"
#include "vettore.h"

Alcolico::Alcolico(u_int g):gradazione(g){}




// virtual Vettore<Bevanda> crea(Carrello c /* ? Vettore<ingredienti> */);


u_int Alcolico::getGradazione()const{
    return gradazione;
}


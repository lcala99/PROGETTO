#ifndef BEVANDA_H
#define BEVANDA_H
#include<iostream>
#include<vettore.h>
#include<ingrediente.h>
#include<carrello.h>
#include <string>
#include "prodotto.h"

typedef unsigned int u_int;
using std::string;

class Bevanda: public Prodotto{
private:
    u_int gradazione;
    public:
        Bevanda(string Nome, u_int Gradazione = 0);
        Bevanda(const Bevanda& b);
        virtual Vettore<Ingrediente> calcolaIngredienti(u_int litri) const;
        // virtual Vettore<Bevanda> crea(Carrello c /* ? Vettore<ingredienti> */);
        virtual Vettore<Ingrediente> getIngredienti() const;
        virtual u_int getGradazione() const;
        virtual bool verificaIngredienti(Vettore<Ingrediente> ingredienti);

};

#endif // BEVANDA_H

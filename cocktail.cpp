#include <iostream>
#include "cocktail.h"

Cocktail::Cocktail(string Nome, Vettore<Ingrediente> ing, u_int q, u_int Gradazione) :
    Bevanda(Nome,Gradazione), ingredienti(ing), quantita(q)
{
    for(auto it=ing.begin(); it!=ing.end(); it++){
        ingredienti.push_back(*it);
    }
    quantita=q;
}

Vettore<Ingrediente> Cocktail::getIngredienti() const{
    return ingredienti;
}

bool Cocktail::verificaIngredienti(Vettore<Ingrediente> ingr){
    bool chk = false;
    for(auto it = ingredienti.begin(); it != ingredienti.end(); it++){
        chk = false;
        for(auto iter = ingr.begin(); !chk && iter != ingr.end(); iter++){
            if( *it == *iter ) chk = true;
        }
    }
    return chk;
}

#include "cocktail.h"

Cocktail::Cocktail(Vettore ing, u_int q){
    for(auto it=ing.begin(); it!=ing.end(); it++){
        ingredienti.push_back(*it);
    }
    quantita=q;
}

#include "bevanda.h"

Bevanda::Bevanda(string Nome, u_int Gradazione):Prodotto(Nome), gradazione(Gradazione){}

Bevanda::Bevanda(const Bevanda& b):Prodotto(b.nome){
    gradazione=b.gradazione;
}

u_int Bevanda::getGradazione() const{
    return gradazione;
}

Vettore<Ingrediente> Bevanda::getIngredienti() const{
    return Vettore<Ingrediente>(Ingrediente(nome));
}

Vettore<Ingrediente> Bevanda::calcolaIngredienti( u_int litri) const{
    return Vettore<Ingrediente>(Ingrediente(nome, litri));
}


bool Bevanda::verificaIngredienti(Vettore<Ingrediente> ingredienti){
    bool chk = false;
    for(auto it = ingredienti.begin(); !chk && it != ingredienti.end(); it++){
        if((*it).getNome()==nome) chk=true;
    }
    return chk ;
}
jgn
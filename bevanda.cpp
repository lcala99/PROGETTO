#include "bevanda.h"

Bevanda::Bevanda(){}

Bevanda::Bevanda(string n){
    nome=n;
}

Bevanda::Bevanda(const Bevanda& b){
    nome=b.nome;
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

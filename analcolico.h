#ifndef ANALCOLICO_H
#define ANALCOLICO_H
#include<iostream>
#include<vettore.h>
#include<ingrediente.h>
#include<bevanda.h>
//#include<carrello.h>
typedef unsigned int u_int;

class Analcolico : public Bevanda
{
    private:
        const u_int gradazione;
    public:
        Analcolico();
        virtual Vettore<Ingrediente> calcolaIngredienti( u_int litri) const;
        // virtual Vettore<Bevanda> crea(Carrello c /* ? Vettore<ingredienti> */);
        virtual Vettore<Ingrediente> getIngredienti() const;
        virtual u_int getGradazione() const;
        virtual bool verificaIngredienti(Vettore<Ingrediente> ingredienti);
};

Analcolico::Analcolico(): gradazione() { }

Vettore<Ingrediente> Analcolico::calcolaIngredienti( u_int litri) const{
    
}

Vettore<Ingrediente> Analcolico::getIngredienti() const{

}

u_int Analcolico::getGradazione() const{
    return gradazione;
}

bool verificaIngredienti(Vettore<Ingrediente> ingredienti){

}

#endif // ANALCOLICO_H


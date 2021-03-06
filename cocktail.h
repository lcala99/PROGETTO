#ifndef COCKTAIL_H
#define COCKTAIL_H

#include<iostream>
#include<vettore.h>
#include<ingrediente.h>
#include<carrello.h>

typedef unsigned int u_int;

class Cocktail : public Bevanda{
private:
    Vettore<Ingrediente> ingredienti;
    u_int quantita;
public:
    Cocktail(string Nome, Vettore<Ingrediente> ing, u_int q, u_int Grad=0);
    virtual Vettore<Ingrediente> calcolaIngredienti( u_int litri) const;
    // virtual Vettore<Bevanda> crea(Carrello c /* ? Vettore<ingredienti> */);
    virtual Vettore<Ingrediente> getIngredienti() const;

    //in teoria non serve perchè lo eredita da Alcolico
    //virtual u_int getGradazione() const;
    
    virtual bool verificaIngredienti(Vettore<Ingrediente> ingr);
};

#endif // COCKTAIL_H

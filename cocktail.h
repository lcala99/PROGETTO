#ifndef COCKTAIL_H
#define COCKTAIL_H

#include<iostream>
#include<vettore.h>
#include<ingrediente.h>
#include<carrello.h>
typedef unsigned int u_int;

class Cocktail : public Alcolico
{
private:
    Vettore<Ingrediente> ingredienti;
    u_int quantita;
public:
    Cocktail(Vettore<Ingrediente> ing, u_int q);
    virtual Vettore<Ingrediente>calcolaIngredienti( u_int litri) const;
    // virtual Vettore<Bevanda> crea(Carrello c /* ? Vettore<ingredienti> */);
    virtual Vettore<Ingrediente>getIngredienti() const;
    virtual u_int getGradazione()const;
    virtual bool verificaIngredienti(Vettore<Ingrediente> ingredienti);
};

#endif // COCKTAIL_H

#ifndef ALCOLICO_H
#define ALCOLICO_H
#include<iostream>
#include<vettore.h>
#include<ingrediente.h>
#include<carrello.h>
typedef unsigned int u_int;

class Alcolico : public Bevanda
{
private:
    u_int gradazione;
public:
    Alcolico(u_int g);
    virtual Vettore<Ingrediente>calcolaIngredienti( u_int litri) const;
    // virtual Vettore<Bevanda> crea(Carrello c /* ? Vettore<ingredienti> */);
    virtual Vettore<Ingrediente>getIngredienti() const;
    virtual u_int getGradazione()const;
    virtual bool verificaIngredienti(Vettore<Ingrediente> ingredienti);
};

#endif // ALCOLICO_H

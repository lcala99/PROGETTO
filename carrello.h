#ifndef CARRELLO_H
#define CARRELLO_H
#include<iostream>
#include<vettore.h>
#include<ingrediente.h>
#include<bevanda.h>

typedef unsigned int u_int;

class Carrello
{
private:
    class QuantitaBevanda{
    public:
        u_int quantita;
        Bevanda bevanda;

    };

    Vettore<Bevanda> arrayBevande;
    Vettore<Bevanda> prodotti; //non mi ricordo più
    Vettore<Ingrediente> ingredientiNecessari;
    Vettore<QuantitaBevanda> quantitaBevande;



public:
    Carrello();
    Vettore<Ingrediente> getIngredienti()const;
    u_int litriTot() const;
    void aggiungiBevanda(Bevanda bev);
    void removeBevanda(Bevanda bev);
    u_int gradazioneMedia();
    Vettore<Bevanda> trovaBevandaIngredienti(Vettore<Bevanda> v);
    bool verificaCocktail(Bevanda b);
};

#endif // CARRELLO_H

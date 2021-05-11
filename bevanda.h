#ifndef BEVANDA_H
#define BEVANDA_H
#include<iostream>
#include<vettore.h>
#include<ingrediente.h>
#include<carrello.h>
#include <string>
typedef unsigned int u_int;
using std::string;

class Bevanda{
    protected:
        string nome;
    public:
        Bevanda();
        Bevanda(string n);
        Bevanda(const Bevanda& b);
        virtual Vettore<Ingrediente> calcolaIngredienti(u_int litri) const;
        // virtual Vettore<Bevanda> crea(Carrello c /* ? Vettore<ingredienti> */);
        virtual Vettore<Ingrediente> getIngredienti() const;
        virtual u_int getGradazione()const = 0;
        virtual bool verificaIngredienti(Vettore<Ingrediente> ingredienti);

};

#endif // BEVANDA_H

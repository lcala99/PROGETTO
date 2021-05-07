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
    private:
        string nome;
    public:
        Bevanda();
        Bevanda(string n);
        Bevanda(const Bevanda& b);
        virtual Vettore<Ingrediente> calcolaIngredienti(u_int litri) const=0;
        // virtual Vettore<Bevanda> crea(Carrello c /* ? Vettore<ingredienti> */);
        virtual Vettore<Ingrediente> getIngredienti() const=0;
        virtual u_int getGradazione()const=0;
        virtual bool verificaIngredienti(Vettore<Ingrediente> ingredienti)=0;

};

Bevanda::Bevanda(){}

Bevanda::Bevanda(string n):nome(n) { }

Bevanda::Bevanda(const Bevanda& b): nome(b.nome) {}

#endif // BEVANDA_H

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
    public:
        Analcolico();
        
        // virtual Vettore<Bevanda> crea(Carrello c /* ? Vettore<ingredienti> */);
        
        virtual u_int getGradazione() const;
        
};

#endif // ANALCOLICO_H

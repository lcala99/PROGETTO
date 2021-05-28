#ifndef CIBO_H
#define CIBO_H
#include "prodotto.h"
#include "ingrediente.h"
#include "vettore.h"

class Cibo: public Prodotto{
    private:
        Vettore<Ingrediente> componenti;
    public:
        Cibo(string nome,Vettore<Ingrediente> Comp);
};

#endif // CIBO_H

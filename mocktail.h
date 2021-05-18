#ifndef MOCKTAIL_H
#define MOCKTAIL_H
#include "analcolico.h"

class mocktail : public Analcolico{
private:
    Vettore<Ingrediente> ingredienti;
    u_int quantita;
public:
    mocktail();
};

#endif // MOCKTAIL_H

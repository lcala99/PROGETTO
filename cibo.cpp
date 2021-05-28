#include "cibo.h"
#include "ingrediente.h"
#include "vettore.h"

Cibo::Cibo(string nome, Vettore<Ingrediente> Comp):Prodotto(nome), componenti(Comp){}

#include "bevanda.h"

Bevanda::Bevanda(){}

Bevanda::Bevanda(string n){
    nome=n;
}

Bevanda::Bevanda(const Bevanda& b){
    nome=b.nome;
}

#ifndef PRODOTTO_H
#define PRODOTTO_H
#include <String>
using namespace std;

class Prodotto
{
protected:
    std::string nome;
public:
    Prodotto(string nome);
    virtual ~Prodotto()=0;
};

#endif // PRODOTTO_H

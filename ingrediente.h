#ifndef INGREDIENTE_H
#define INGREDIENTE_H
#include<iostream>
typedef unsigned int u_int;
using std::string;

class Ingrediente
{

private:
    string nome;
    u_int quantita;
    bool isLiquido;

public:
    Ingrediente(string n, u_int q, bool l);
    Ingrediente(const Ingrediente& ing);
    ~Ingrediente();

    /*  @brief * moltiplica la quantità dell'ingrediente
     *  @param unsigned int: moltiplicatore
     *  @return Ingrediente
     * */
    Ingrediente operator*(const u_int c)const;

    /*  @brief * divide la quantità dell'ingrediente
     *  @param unsigned int: divisore
     *  @return Ingrediente
     * */
    Ingrediente operator/(const u_int c)const;

    /*  @brief * somma la quantità dell'ingrediente
    *  @param unsigned int: addizione
    *  @return Ingrediente
    * */
    Ingrediente operator+(const u_int c) const;

    /*  @brief * somma la quantità di due ingredienti
    *  @param unsigned int: addizione tra ing
    *  @return Ingrediente
    * */
    Ingrediente operator+(const Ingrediente& ing) const;

    bool operator==(Ingrediente& c) const;

    /*  @brief getNome restituisce il nome
     *  @return string
     * */
    string getNome()const;

    /*  @brief getQuantita restituisce la quantia
     *  @return unsigned int
     * */
    u_int getQuantita()const;

    /*  @brief getIsLiquido restituisce true se l'ingrediente è liquido
     *  @return bool
     * */
    bool IsLiquido()const;

    operator u_int() const;

};


Ingrediente::Ingrediente(string n, u_int q, bool l):nome(n), quantita(q),isLiquido(l){}

Ingrediente::Ingrediente(const Ingrediente& ing):nome(ing.getNome()), quantita(ing.getQuantita()),isLiquido(ing.isLiquido){}


Ingrediente::~Ingrediente(){}


Ingrediente Ingrediente::operator*(const u_int c)const{

    return  Ingrediente(nome,quantita*c,isLiquido);
}

Ingrediente Ingrediente::operator/(const u_int c)const{
    return  Ingrediente(nome,quantita/c,isLiquido);
}

Ingrediente Ingrediente::operator+(const Ingrediente& ing) const {
    return Ingrediente(nome, quantita+ing.quantita, isLiquido)
}

Ingrediente Ingrediente::operator+(const u_int c)const{
    return  Ingrediente(nome,quantita+c,isLiquido);
}

bool Ingrediente::operator==(Ingrediente& c) const{
    return nome==c.getNome() && quantita== c.getQuantita() && isLiquido==c.isLiquido;
}

string Ingrediente:: getNome()const{return nome;}


u_int Ingrediente::getQuantita()const{return quantita; }

bool Ingrediente::IsLiquido()const{return isLiquido;}

Ingrediente::operator u_int() const{return quantita;}


#endif // INGREDIENTE_H

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



};
#endif // INGREDIENTE_H

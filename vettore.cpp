#include "vettore.h"
#include <math.h>
typedef unsigned int u_int;

/*
template <class T>
Vettore<T>::Iteratore::Iteratore(T* p, u_int s, u_int c): size(s), cap(c),past_the_end(false) {
    T* arr = new T[c];
    for(int i=0; i<size; i++){
        arr[i]=p[i];
    }
    punt=arr;
}

template <class T>
typename Vettore<T>::Iteratore Vettore<T>::Iteratore::clone(const Iteratore& it){
    return new Iteratore(it.punt, it.size, it.cap);
}

template<class T>
Vettore<T>::Iteratore::Iteratore(Iteratore& it,bool pte=false):past_the_end(pte){
    this=clone(it);
}
template <class T>
Vettore<T>::Iteratore::~Iteratore(){
    delete punt;
}

template <class T>
Vettore<T>::Vettore(): v_size(0),capacity(0) {
    info = nullptr;
}

template <class T>
Vettore<T>::Vettore(u_int n, T& t):
    info( n == 0 ? nullptr : new T[n]), v_size(n), capacity(n){

    for(int i = 0; i < v_size; i++)info[i]=t;
}

/*
 * template <class T>
 * Vettore<T>::Vettore(Iteratore& i);


template <class T>
u_int Vettore<T>::size()const{return v_size;}

template <class T>
typename Vettore<T>::Iteratore& Vettore<T>::end() const{return new typename Vettore<T>::Iteratore(info[v_size()], true);}

template <class T>
Vettore<T>::Iteratore& begin() const{
    Vettore<T>::Iteratore it.punt = info;
    return it;
}

template <class T>
void add(Iteratore& t);

template <class T>
Vettore<T>::T& remove(Iteratore& t){
    Vettore<T>::Iteratore it = begin();
    while(it != t) it++;
    Vettore<T>::Iteratore aux=it+1;
    size--; //perchè tolgo un valore
    return it; //ritorno quello che ho tolto
}
*/

//              METODI ITERATORE
template <class T>
Vettore<T>::Iteratore::Iteratore(Vettore<T> v, u_int ind=0){

}

//Iteratore(T* p, u_int s, u_int c);

template <class T>
static Vettore<T>::Iteratore Vettore<T>::Iteratore::clone(const Iteratore& it){

}

template <class T>
Vettore<T>::Iteratore::Iteratore(Iteratore& it){

}

template <class T>
Vettore<T>::Iteratore::~Iteratore(){

}

//overloading operatori
template <class T>
typename Vettore<T>::Iteratore& Vettore<T>::Iteratore::operator++(){

}

template <class T>
typename Vettore<T>::Iteratore& Vettore<T>::Iteratore::operator--(){

}

template <class T>
typename Vettore<T>::T& Vettore<T>::Iteratore::operator*(){

}

template <class T>
typename Vettore<T>::T& Vettore<T>::Iteratore::operator->(){

}

template <class T>
typename Vettore<T>::T& Vettore<T>::Iteratore::operator[](u_int ind){

}

template <class T>
bool Vettore<T>::Iteratore::operator!=(const Iteratore& it) const{

}

template <class T>
bool Vettore<T>::Iteratore::operator==(const Iteratore& it) const{

}



//              METODI VETTORE
template <class T>
Vettore<T>::Vettore(){

}

template <class T>
Vettore<T>::Vettore(u_int n, T& t){

}

template <class T>
Vettore<T>::Vettore(Iteratore& i){ //forse non ci serve
}

template <class T>
Vettore<T>::Vettore(Vettore& vec){

}

template <class T>
Vettore<T>::Iteratore& Vettore<T>::begin() const{

}

template <class T>
Vettore<T>::Iteratore& Vettore<T>::end()const{

}

template <class T>
u_int Vettore<T>::size() const{

}

template <class T>
void Vettore<T>::push_back(T& val){

}

template <class T>
void Vettore<T>::insert(Iteratore& it, T& val){

}

template <class T>
T& Vettore<T>::remove(Iteratore& it){

}

template <class T>
T& Vettore<T>::remove2(T& value){

}

template <class T>
T& Vettore<T>::pop_back(){

}

template <class T>
bool Vettore<T>::empty(){ //true se il vettore è vuoto
    if(size=0) return true;
}

template <class T>
typename Vettore<T>::Vettore& merge(Vettore<T>::Vettore& vec){
    T* aux= new T[v_size+vec.size];
    for(int i = 0; i< v_size; i++) aux[i]=punt[i];
    for(i=0; i<v.v_size; i++) aux[v_size+i]=v.punt[i];
    delete [] punt;
    punt=aux;
}

template <class T>
bool Vettore<T>::operator==(Vettore& vec){

}
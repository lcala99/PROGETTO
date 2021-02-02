#include "vettore.h"
#include <math.h>
typedef unsigned int u_int;

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
Vettore<T>::Iteratore::Iteratore(Iteratore& it):past_the_end(false){
    this=clone(it);
}

template<class T>
Vettore<T>::Iteratore::Iteratore(Iteratore& it,bool pte):past_the_end(pte){
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
*/

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
    return it;
}

template <class T>
Vettore& merge(const Vettore& V){
    T* aux= new T[v_size+v.v_size];
    for(int i = 0; i< v_size; i++) aux[i]=punt[i];
    for(i=0; i<v.v_size; i++) aux[v_size+i]=v.punt[i];
    delete [] punt;
    punt=aux;
}
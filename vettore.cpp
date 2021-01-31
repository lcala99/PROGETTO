#include "vettore.h"
typedef unsigned int u_int;

template <class T>
Vettore<T>::Iteratore::Iteratore(T* p, u_int s, u_int c): size(s), cap(c) {
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
Vettore<T>::Iteratore::Iteratore(Iteratore& it){
    this=clone(it);
}

template <class T>
Vettore<T>::Iteratore::~Iteratore(){
    delete punt;
}

template <class T>
Vettore();

template <class T>
Vettore(T& t);

template <class T>
Vettore(Iteratore& i);

template <class T>
Iteratore& first() const;

template <class T>
Iteratore& begin() const;

template <class T>
u_int size()const;

template <class T>
void add(Iteratore& t);

template <class T>
T& remove(Iteratore& t);
© 2021 GitHub, Inc.

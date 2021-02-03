#ifndef VETTORE_H
#define VETTORE_H
#include <iostream>

typedef unsigned int u_int;

template <class T>
class Vettore;

template <class T>
std::ostream& operator<<(std::ostream& os,const Vettore<T>& vec);

class Iteratore;

template<class T>
class Vettore{
    friend std::ostream& operator<<(std::ostream& os,const Vettore<T>& vec);
    friend class Iteratore;
    private:
        T* info;
        u_int size;
        u_int capacity;
    public:
        class Iteratore{
            friend class Vettore<T>;
            //friend Vettore<T>::Iteratore Vettore<T>::Iteratore::clone(const Iteratore& it);
            private:
                Vettore<T>* punt;
                u_int index;
            public:
            //iteratore constructor
            Iteratore(Vettore<T> v, u_int ind=0);
            //Iteratore(T* p, u_int s, u_int c);
            static Iteratore clone(const Iteratore& it);
            Iteratore(Iteratore& it);
            ~Iteratore();
            //overloading operatori
            Iteratore& operator++();
            Iteratore& operator--();
            const T& operator*() const;
            T& operator->();
            T& operator[](u_int ind);
            bool operator!=(const Iteratore& it) const;
            bool operator==(const Iteratore& it) const;
        };
    //vettore constructor
    Vettore();
    Vettore(u_int n, T& t);
    Vettore(Iteratore& i); //forse non ci serve
    Vettore(Vettore& vec);
    
    Iteratore& begin() const;
    Iteratore& end() const;
    u_int size() const;
    void push_back(T& val);
    void insert(Iteratore& it, T& val);
    T& remove(Iteratore& it); //rimuove l'elemento in posizione it
    T& remove2(T& value); //rimuove elemento con valore value
    T& pop_back(); //rimuove ultimo elemento
    bool empty(); //true se il vettore è vuoto
    Vettore& merge(Vettore& vec);
    bool operator==(Vettore& vec);
};

template <class T>
std::ostream& operator<<(std::ostream& os,const Vettore<T>& vec);


#endif // VETTORE_H

#ifndef VETTORE_H
#define VETTORE_H
typedef unsigned int u_int;

class Iteratore;

template<class T>
class Vettore{
friend class Iteratore;
private:
    T* vec;
    u_int v_size;
    u_int capacity;
public:
    class Iteratore
    {
    //friend Vettore<T>::Iteratore Vettore<T>::Iteratore::clone(const Iteratore& it);
    private:
        T* punt;
        u_int size;
        u_int cap;
    public:
        Iteratore(T* p, u_int s, u_int c);
        static Iteratore clone(const Iteratore& it);
        Iteratore(Iteratore& it);
        ~Iteratore();
    };
    Vettore();
    Vettore(T& t);
    Vettore(Iteratore& i);
    Iteratore& first() const;

    Iteratore& begin() const;
    u_int size()const;
    void add(Iteratore& t);
    T& remove(Iteratore& t);

};

#endif // VETTORE_H

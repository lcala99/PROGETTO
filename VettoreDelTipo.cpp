#ifndef VETTORE_H
#define VETTORE_H
typedef unsigned int u_int;

class Iteratore;

template <class T>
class Vettore{
    friend class Iteratore;
    private:
        T* value;
        u_int size;
        u_int capacity;
    public:
    class Iteratore{
        private: //essendo classe annidata forse si puo mettere tutto su public, no?
            Vettore<T> *vec;
            /*  non so a sto punto se a iteratore serva size e capacity o se di fatto
                è solo un puntatore e il controlli li dobbiamo fare su vettore e basta
                a te serve anche un bool per past_the_end, non abbiamo aggiornato il file.h
                anche se sto tipo non lo usa quindi a sto punto non so se serva
            */
           int indice; //boh a quando pare serve
        public:
            Iteratore &operator++();
            Iteratore &operator--();
    }

        /*Iterator(const Vector<T> *vector, int nIndex);
            qui crea un iteratore con un vettore???? wtf*/
        const T &operator*() const; //dereferenziazione ok, ci serve anche a noi
        bool operator!=(const Iterator &other) const;

public:
    Vettore(); //luca
    ~Vettore();
    //explicit Vector(int nSize); boh non penso che a noi serva
    void insert(const T &value);
    u_int size() const;
    /*const T &operator[](int index) const; Elia ha detto che così facendo è una soluzione
                                            di basso livello perchè lasciamo intravedere l'implementazione
                                            che abbiamo scelto per vettore, è meglio come avevi fatto tu
                                            ovvero non riceviamo un int che indica l'indice ma
                                            riceviamo un iteratore e stampiamo il valore di quell'iteratore
                                            Però allo stesso tempo è comodo dire "dammi il valore vettore[1]" quindi boh */
    Iteratore begin() const;
    Iteratore end() const;
    //metodi che avevamo messo noi
    Vettore& merge(const Vettore& v);
    T& remove(Iteratore& t);
    Vettore(u_int n, T& t);
};


 /**************** METODI VETTORE ***********************/
//costruttore Luca
template <class T>
Vettore<T>::Vettore(): size(0),capacity(0) {
    value = nullptr;
}
//costruttore2 luca
template <class T>
Vettore<T>::Vettore(u_int n, T& t): value( n == 0 ? nullptr : new T[n]), size(n), capacity(n) {
        for(int i = 0; i < size; i++) value[i]=t;
}

template <class T>
Vettore<T>::Vettore(int cap){
    capacity = cap;
    value = new T[capacity];
}

//distruttore, non mi pare sia profondo, da rivedere
template <class T>
Vettore<T>::~Vettore(){
    delete value;
    size = 0; //boh non mi convince
    capacity = 0; //non mi convince
}

//getter epr size
template <class T>
u_int Vettore<T>::size() const {
    return v_size;
}

//questo ci sta per inserire valori
template <typename T>
void Vettore<T>::insert(const T &x)
{
    if (size == capacity)
    {
        // qua fa quello che volevi fare tu per raddoppiare la memoria
        if (capacity == 0) capacity = 1;
        capacity *= 2;
        T* aux = new T[capacity];
        // copia i dati e questa si è profonda
        for (int i = 0; i<size; i++) aux[i] = value[i];
        delete value;
        value = aux;
    }
    // insert the new element
    value[size] = x;
    size++; //perchè size indica il numero effettivo di valori presenti quindi ok
}


 /**************** METODI iTERATORE ***********************/

//costruttore iteratore Luca
template <class T>
Vettore<T>::Iteratore::Iteratore(T* p, u_int s, u_int c): size(s), cap(c),past_the_end(false) {
    T* arr = new T[c];
    for(int i=0; i<size; i++){
        arr[i]=p[i];
    }
    punt=arr;
}

//vedi sopra speigazione Elia
template <typename T>
const T &Vector<T>::operator[](int nIndex) const
{
    if (nIndex >= m_nSize)
        //throw std::exception("Index out of range"); questo noi lo facciamo col past the end, se decidiamo di metterlo

    return m_pData[nIndex];
}


//             METODI BEGIN E END
/*
template <class T>
typename Vector<T>::Iterator Vector<T>::begin() const
{
    return Vector<T>::Iterator{ this, 0 }; //non so che sintassi sia con le {}
}

template <class T>
typename Vector<T>::Iterator Vector<T>::end() const
{
    return Vector<T>::Iterator{ this, m_nSize }; //idem sopra
}
*/

//questo è il costrtutore di iteratore fatto da lui
template <class T>
Vettore<T>::Iteratore::Iteratore(const Vettore<T> *vect, int ind): vec(vect), indice(ind) {}

//dereferenziazione
template <class T>
const T &Vettore<T>::Iteratore::operator*() const
{
    return vec->operator[](indice); 
    //sto indice a sto punto mi viene da pensare che vada messo nei campi dati di iteratore ma boh
}

//operatore ++
template <class T>
typename Vettore<T>::Iteratore &Vettore<T>::Iteratore::operator++(){
    indice++;
    return *this;
}

//merge tra due vettori
template <class T>
Vettore& merge(const Vettore& V){
    T* aux= new T[v_size+v.v_size];
    for(int i = 0; i< v_size; i++) aux[i]=punt[i];
    for(i=0; i<v.v_size; i++) aux[v_size+i]=v.punt[i];
    delete [] punt;
    punt=aux;
}

#endif // VETTORE_H
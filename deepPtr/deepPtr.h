#ifndef DEEPPTR_H
#define DEEPPTR_H
#include <iostream>
using namespace std;

template<class T>
class DeepPtr {
    private:
        T* ptr;
    public:
        DeepPtr();
        DeepPtr(const T& punt);
        DeepPtr(const DeepPtr& dptr); //costruttore di copia
        DeepPtr& operator=(const DeepPtr& dptr); //assegnazione
        ~DeepPtr();
        operator bool() const;
        T& operator*();
        T* operator->();
        bool operator==(const DeepPtr& dptr) const;
        bool operator!=(const DeepPtr& dptr) const;
};

template <class T>
DeepPtr<T>::DeepPtr() : ptr(nullptr) {}


template <class T>
DeepPtr<T>::DeepPtr(const T& punt){
    ptr = new T(punt);

}

template <class T>
DeepPtr<T>::DeepPtr(const DeepPtr& dptr){
    cout << "costruttore dptr" << endl;
    //delete ptr;
    /*T* aux = ptr;
    ptr= nullptr;
    delete aux;*/
    ptr=new T(*(dptr.ptr));
}

template <class T>
typename DeepPtr<T>::DeepPtr& DeepPtr<T>::operator=(const DeepPtr& dptr){
    if(!ptr){
        if(dptr){
            ptr = new T(dptr.ptr);
        }
    }
    if(dptr.ptr && this->ptr && this->ptr != &dptr){
        delete ptr;
        ptr = new T(dptr.ptr);
    }
    return *this;
}

template <class T>
DeepPtr<T>::~DeepPtr(){
    delete[] ptr;
}


template <class T>
DeepPtr<T>::operator bool() const{
    return this->ptr != nullptr;
}

template <class T>
T& DeepPtr<T>::operator*(){
    return *ptr;
}

template <class T>
T* DeepPtr<T>::operator->(){
    return &ptr;
}

template <class T>
bool DeepPtr<T>::operator==(const DeepPtr& dptr) const{
    if(!ptr || !dptr.ptr) return false;
    int p1 = sizeof(ptr);
    int p2 = sizeof(dptr.ptr);
    if(p1 != p2) return false;
    for(int i=0; i<p1; i++){
        if(ptr[i] != dptr.ptr[i]) return false;
    }
    return true;
}

template <class T>
bool DeepPtr<T>::operator!=(const DeepPtr& dptr) const {
    return !(*this == dptr);
}

#endif

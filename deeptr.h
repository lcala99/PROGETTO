#ifndef DEEPPTR_H
#define DEEPPTR_H
#include <iostream>
using namespace std;

/*
template <class T>
std::ostream& operator<<(std::ostream& os, const DeepPtr<T>& dptr);*/

template<class T>
class DeepPtr {
    private:
        T* ptr;
    public:
        T& getptr();
        DeepPtr();
        DeepPtr(const T& punt);
        DeepPtr(const DeepPtr& dptr); //costruttore di copia
        DeepPtr& operator=(const DeepPtr& dptr); //assegnazione
        ~DeepPtr();
        T& operator*();
        T* operator->();
};

template <class T>
T& DeepPtr<T>::getptr(){return ptr;}

template <class T>
DeepPtr<T>::DeepPtr() : ptr(nullptr) {}


template <class T>
DeepPtr<T>::DeepPtr(const T& punt){
    ptr = new T(punt);

}

template <class T>
DeepPtr<T>::DeepPtr(const DeepPtr& dptr){
    ptr=new T(*(dptr.ptr));
}

template <class T>
typename DeepPtr<T>::DeepPtr& DeepPtr<T>::operator=(const DeepPtr& dptr){
    if(this != &dptr){
        if(!ptr){
            if(dptr){
                ptr = new T(*(dptr.ptr));
            }
        }else if(dptr.ptr){
            delete ptr;
            ptr = new T(*(dptr.ptr));
        }
        return *this;
    }
}

template <class T>
DeepPtr<T>::~DeepPtr(){
    delete[] ptr;
}

template <class T>
T& DeepPtr<T>::operator*(){
    return *ptr;
}

template <class T>
T* DeepPtr<T>::operator->(){
    return ptr;
}

#endif // DEEPTR_H

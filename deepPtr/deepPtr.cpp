#include "deepPtr.h"

template <class T>
DeepPtr<T>::DeepPtr(){

}

template <class T>
DeepPtr<T>::DeepPtr(const T& punt){
    ptr = new T(punt);

}

template <class T>
DeepPtr<T>::DeepPtr(const DeepPtr& dptr){
    delete[] ptr;
    ptr=new T(dptr.ptr);
}

template <class T>
typename DeepPtr<T>::DeepPtr& DeepPtr<T>::operator=(const DeepPtr& dptr){
    if(this != &dptr){
        delete[] ptr;
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
    return *this != nullptr;
}

template <class T>
T& DeepPtr<T>::operator*(){
    return *ptr;
}

template <class T>
T* DeepPtr<T>::operator->(){
    return &ptr;
}
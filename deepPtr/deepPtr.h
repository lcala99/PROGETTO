#ifndef DEEPPTR_H
#define DEEPPTR_H

template<class T>
class DeepPtr {
    private:
        T* ptr;
    public:
        DeepPtr();
        DeepPtr(const T& punt);
        DeepPtr(const DeepPtr& dptr) const; //costruttore di copia
        DeepPtr& operator=(const DeepPtr& dptr); //assegnazione
        ~DeepPtr();
        operator bool() const;
        T& operator*();
        T& operator->();
}
#endif

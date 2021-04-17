#include <iostream>
#include "deepPtr.h"
using namespace std;

main(){
    DeepPtr<int> c(8);
    DeepPtr<int> C(c);
    cout << "prova ";
    cout << *C << endl;
    DeepPtr<int> D(c);
    DeepPtr<int> F();
    D = F;
    D = C;
    cout << *D << endl;
    *C = 10;
    cout << *C << endl; //10
    cout << *D << endl; //8
}
#include <iostream>
#include "deepPtr.h"
using namespace std;

main(){
    char* a;
    DeepPtr<int> c(8);
    DeepPtr<int> C(c);
    cout << "ciao "<< *C  << "boh" << endl;
}
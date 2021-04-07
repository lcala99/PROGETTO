#include <iostream>
#include "deepPtr.h"
using namespace std;

main(){
    char* a;
    a[0]='a';
    DeepPtr<char> c(*a);
    DeepPtr<char> C(c);
    cout << (*C) << endl;
}
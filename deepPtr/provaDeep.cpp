#include <iostream>
#include "deepPtr.h"
using namespace std;

class abba{
    public:
   string s={"abba char"};
};

main(){
    DeepPtr<int> c(8);
   /* DeepPtr<int> C(c);
    cout << "prova ";
    cout << *C << endl;
    
    DeepPtr<int> F;
    D = F;
    D = C;
    cout << D << endl;
    
    *C = 10;
    
    cout << *C << endl; //10
    cout << *D << endl; //8*/
    DeepPtr<int> D(c);
    if(c==D)cout<<"uguali";
    int arr[7];
    cout<<endl<<(sizeof(arr)/sizeof(arr[0]));
}
    /*abba abb;
    DeepPtr<abba>test(abb);
    int* arr = new int[7];
    cout<<"arr size " <<sizeof(arr);
    cout<<test->s;
    */

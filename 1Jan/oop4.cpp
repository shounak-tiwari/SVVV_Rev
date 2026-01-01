// Copy constructor is type of constructor it is use for create a new object using existing object of the same class...

// Shallow copy and Deep Copy 
// Shallow copy : Duplicates the objects but no the data it points to...
/**
 * 1. Obj1 ---- 
                |
               100(same obj)
                |
 * 2. Obj2 -----
 */
// malloc , calloc, realloc 
#include<iostream>
using namespace std;

class Shallow{
    public:
    int *p;
    Shallow(int v){
        p = new int(v);
    }
};
int main(){
    Shallow Obj1(10);
    Shallow Obj2 = Obj1;
    cout<< Obj1.p <<endl;
    *Obj2.p = 20; 
    cout<< Obj2.p <<endl;
}

// Deep copy : create new memory and copies value into it...
// separate memory allocation 
// object are independent 
// safe destruction

#include<iostream>
using namespace std;
class Deep{
    public:
    int *p;
    Deep(int v){
        p = new int(v); // heap 
        cout<<"const create memory for values"<<endl;
    }

    // it is deep copy when object is passing into parms
    Deep(const Deep& obj){
       p = new int(*(obj.p));
    cout<<"Copy of obj into new "<<endl;
    }
};
int main(){
    Deep obj1(10);
    Deep obj2(20);
    Deep obj3(40);
    Deep obj4(obj2);
}

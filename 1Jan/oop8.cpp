// base class pointer -> derived object 
#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"A"<<endl;
    }
};
class B:public A{
    public:
    void show(){
        cout<<"B"<<endl;
    }
};
int main(){
    A* ptr;
    B obj;
    ptr = &obj;
    ptr->show();
}
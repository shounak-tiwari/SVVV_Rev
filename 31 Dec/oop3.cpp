// Aceess modifiers  : where a class memeber (variable or function) can be accessed froom....
/**
 * why access specifiers 
 * data hiding 
 * security 
 * control access 
 * clean API  design 
 */
#include<iostream>
#include "oop4.cpp"
using namespace std;
int main(){
    Home T1;
    T1.setmethod(10,20);
    MultipleReturn  s1= T1.getmethod();
    cout<<s1.x<<endl;
    cout<<s1.y<<endl;
}
// getter and setter ?
/**
 * Direct access to data is dangerous (X)
 * Getter and setter give to controlled access 
 */
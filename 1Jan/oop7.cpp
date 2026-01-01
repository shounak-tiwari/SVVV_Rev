// Concept of ineritance 
// Inheritance allows a child (derived) class to acquire properites and behavior of a parent (base) class

// purpose of inheritance
// Code Reusability 
// method overriding 
// Runtime Polymorphism


// why inheritance 
// a. Avoid code duplication 
// b. common details reused 
// c. easy to extend 

// Real world + industry use cases 
// employee mamangement system 
// emplyee 
    /**
     * id
     * name
     * salary
     * age
     * city
     * title
     */
// manager 
/**
 * team
 * admin
 * projects 
 */
// developer
/**
 * tech 
 * project
 * role in project 
 *  */ 
/**
 * types of inheritance 
 * Single inheritance 
 * Multilevel inheritance 
 * Multiple inheritance 
 * Hierarchical inheritance 
 * Hybrid inheritance  : leads to diamond problem
 */

//  class A (ConstA)-> class B (ConstB) => main function(){
//  B objofB}
/**
 * A
 * B
 * 
 */
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
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
    B obj;
    obj.show();
}
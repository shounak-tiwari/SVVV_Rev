/**
 * Class is a user define data type
 * Class Blueprint or Prototype
 * class is user-define data type that acts as a blueprint or prototype for creating objects 
 * class contains data member and data member functions (methods/beha) 
 * default type of access attribute of class is private 
 * class not occupy any memory  
 */
// padding wastes memory to save time 
#include<iostream>
using namespace std;
#pragma pack(1)
class Target{
    public:
    char x; //1
    int y; // 4
    char z; // 1 
};
#pragma pack()
int main(){
    Target T1;
    cout<<"The total size of T1 : "<<sizeof(T1);
}

// extra unused bytes automatically added by compiler between data member

// cpu access memory in fixed soze block (word - aligned access)

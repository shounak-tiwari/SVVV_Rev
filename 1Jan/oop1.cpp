// A special method authomatially called when an object is create , responsible for initializing the objects state by setting initial values for its variable ensuring its ready for use

// call automatically whenever object of class is created 
// A Constructor has same name as the class itself 

#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Hello Constructor";
    }
};
int main(){
    Base B1;
    cout<<"Size of object : "<<sizeof(B1);
}

/**
 * Default constructor 
 * Parameterized constructor 
 * Copy Constructor 
 * Move Constructor
*/
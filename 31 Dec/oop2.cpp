#include<iostream>
using namespace std;
class Target{
    // attributes 

};
int main(){
    Target T1;
    cout<<"Size of class is : "<<sizeof(T1);
}
// object identity 
// the complier allocated 1 bytes for empty class object that's knows as Dummy byte
// who inserts padding 
// What is the minimum size of an empty class?
// Function Calling in DMD - Compile time or runtime time 
// message passing is possible only oops 
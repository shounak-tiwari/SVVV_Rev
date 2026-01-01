// move constructo transfers ownership of resources from a temp object to new object without coping 
// real use cases :
/**
 * large arrays 
 * big objects 
 * file handles 
 * memory buffers 
 */

#include<iostream>
#include<vector>
using namespace std;

class MyClass{
    private:
    int b;
    public:
    // int &&a : rvalue reference 
    // temo value
    MyClass(int &&a ){
        b = move(a);
        cout<<"Move onstructor called ! "<<endl;
    }
    void display(){
        cout<<b<<endl;
    }
};
int main(){
    int a= 4;
    MyClass obj1(move(a));
    obj1.display();
    return  0;
}


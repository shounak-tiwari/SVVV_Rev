// Parameterized constructor is a type of construcot that can accept the argument , in this const. possible to pass args to initialize an object when it is created

#include<iostream>
using namespace std;
class ParameterizeConst{
    private:
    int x;
    int y;
    public:
    ParameterizeConst(int a,int b){
        x=a;
        y=b;
    }
};
int main(){
    ParameterizeConst Obj1(10,20);
}
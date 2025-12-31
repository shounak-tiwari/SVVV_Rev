#include<iostream>
struct MultipleReturn
{
    int x;
    int y;
};


class Home{
    private:
    int x;
    int y;
    public:
    void setmethod(int a, int b){
        x=a;
        y=b;
    }
    MultipleReturn getmethod(){
        return {x,y};
    }
};
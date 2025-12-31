#include<iostream>
#include<utility>
using namespace std;

class Home{
    private:
    int x;
    int y;
    public:
    void setData(int a,int b){
        x=a;
        y=b;
    }
    pair<int,int> getData(){
        return {x,y};
    }
};
int main(){
 Home T1;
 T1.setData(10,20);
 pair<int,int> data = T1.getData();
 cout<<"X : "<< data.first<<endl;
 cout<<"y : "<<data.second<<endl;
}
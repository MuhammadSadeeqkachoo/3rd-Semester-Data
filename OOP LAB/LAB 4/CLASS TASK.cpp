#include<iostream>

using namespace std;


class A{
private:
    int x;
protected:
    int y;
public:
    int z;
    A():x(0),y(0),z(0){}
    A(int xx,int yy, int zz):x(xx),y(yy),z(zz){}
    void showA(){
    cout<<"x : "<<x<<endl;
    cout<<"y : "<<y<<endl;
    cout<<"z : "<<z<<endl;}
};

class B:public A{
private:
    int w;

 public:
     B():A(),w(0){}
     B(int xx, int yy, int zz, int ww):A(xx,yy,zz),w(ww){}
     void showB(){
         showA();
         cout<<"w : "<<w<<endl;
     }
};


int main(){
 A objA(2,3,4);
 objA.showA();
 objA.z=10;
 objA.showA();
 B objB(2,2,2,2);
 objB.showB();
return 0;}

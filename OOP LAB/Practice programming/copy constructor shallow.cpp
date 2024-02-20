#include<iostream>

using namespace std;

class iphone{
public:
    int a=2,b=2;
    iphone(int aa,int bb){
    a=aa;
    b=bb;
    }

    void show(){
    cout<<"value of a and b = "<<a<<" , "<<b<<endl;}
};

int main(){
    int a=3;
   iphone o(4,5);
   o.show();
   iphone o2(a,a);
   iphone.iphone.o2(o);
   o2.show();

   return 0;
}

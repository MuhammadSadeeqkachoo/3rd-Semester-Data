#include<iostream>

using namespace std;

class baseclass{
  public:
      int var1;
       void display(){
      cout<<"Display base class var1 = "<<var1<<endl;
      }

};

class derivedclass:public baseclass{
    public:
        int var2 =44;
        void display(){cout<<"Display Derived class var 1 = "<<var1<<endl;
        cout<<"Display Derived class var 2 = "<<var2<<endl;}
};

int main(){
    baseclass *bp;
    baseclass bo;
    derivedclass dob;
    derivedclass *dp;
    bp=&dob;
    bp->var1=33;
    bp->display();

return 0;}

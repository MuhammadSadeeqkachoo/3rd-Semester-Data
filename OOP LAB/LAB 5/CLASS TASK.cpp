#include<iostream>

using namespace std;

class shape{//base class
   public:
       //pure virtual function
    virtual void draw(){cout<<"shape"<<endl;};
    };

class circle: public shape{//child class one
   public:
    void draw(){cout<<"Draw a circle "<<endl;}
    };

class square : public shape{//child class two
   public:
    void draw(){cout<<"Draw a square "<<endl;}
    };

    int main(){

    shape *sh;//shape sh1;
    circle c1;
    square s1;
    //sh=&sh1;
    //sh->draw();
    sh=&c1;
    sh->draw();
    sh=&s1;
    sh->draw();
    return 0;
    }

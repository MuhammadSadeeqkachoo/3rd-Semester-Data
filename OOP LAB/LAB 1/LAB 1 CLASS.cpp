#include<iostream>

using namespace std;

/*
c1=2+4i
c2=-3-5.6i
c3=0.5-8.22i
c4=-sqrt(11)+2i
c5=2+(i^3)=2-i
*/

class Complex{

private://access specifier

    double re,im;

public:
    //constructor
    //special function
    Complex(){//initialization
        re=0;
        im=0;

    }


    //we need this function as data is private
    void getcomplex(double r,double i){
        re=r;
        im=i;
    }
    //we need another function here
    void showcomplex(){
        cout<<re<<"+"<<im<<"i"<<endl;

    }
};

int main (){

Complex c1,c3,c2;
c1.getcomplex(2,4);
c1.showcomplex();

c1.getcomplex(3,25);
c1.showcomplex();

cout<<"c3 before update "<<endl;
c3.showcomplex();
cout<<"c3 after update "<<endl;
c3.getcomplex(0,6);
c3.showcomplex();
}

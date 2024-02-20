#include <iostream>

using namespace std;

class Complex{
private:
    double re ,im;
public:
    Complex();
    Complex(double r,double i);
    void addCom(Complex c1,Complex c2);
    void subCom(Complex c1,Complex c2);
    void mulCom(Complex c1,Complex c2);
    void display();
    void input();
};

Complex::Complex():re(0),im(0){}

Complex::Complex(double r,double i):re(r),im(i){}

void Complex::addCom(Complex c1,Complex c2){
 re=c1.re+c2.re;
 im=c1.im+c2.im;
 }

 void Complex::subCom(Complex c1,Complex c2){
 re=c1.re-c2.re;
 im=c1.im-c2.im;
 }

 void Complex::display(){
     if(im>=0){cout<<re<<"+"<<im<<"i"<<endl;}
     else
     cout<<re<<"-"<<-im<<"i"<<endl;
     }

void Complex::input(){
cout<<"enter real and imaginary number"<<endl;
cin>>re;cin>>im;}

void Complex::mulCom(Complex c1,Complex c2){
    re=(c1.re*c2.re)-(c1.im*c2.im);
    im=(c1.re*c2.im)+(c1.im*c2.re);
}



 int main(){
     Complex c1,c2,c;
     c1.input();
     c1.display();
     c2.input();
     c2.display();
     c.addCom(c1,c2);
     cout<<"Addition ";c.display();
     c.subCom(c1,c2);
     cout<<"Subtraction ";c.display();
     c.mulCom(c1,c2);
     cout<<"Product ";c.display();
 return 0;}

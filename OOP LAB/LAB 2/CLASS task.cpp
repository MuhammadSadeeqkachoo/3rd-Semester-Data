#include<iostream>

using namespace std;


class Complex {

private :
    double re,im;
public:
    Complex();
    Complex(double r,double i);
    void showComplex();
    void addComplex(Complex c1,Complex c2);
    Complex negComplex();
    void subComplex(Complex c1,Complex c2);
    Complex conjugate();

    };

    Complex::Complex(){
    re=0.0;im =0.0;}

    Complex::Complex(double r,double i){
    re=r;im=i;}

    void Complex::showComplex(){
        if(im>=0)
    cout<<re<<"+i"<<im<<endl;
        else{
            cout<<re<<"-i"<<-im<<endl;
        }
         }

    void Complex::addComplex(Complex c1,Complex c2){
    re=c1.re+c2.re;
    im=c1.im+c2.im;
    }

    Complex Complex::negComplex(){
    Complex temp;
    temp.re=-re;
    temp.im=-im;
    return temp;
    }

    void Complex::subComplex(Complex c1,Complex c2){
    re=c1.re-c2.re;
    im=c1.im-c2.im;
    }

    Complex Complex::conjugate(){
    Complex t;
    t.re=re;
    t.im=-im;
    return t;
    }



int main (){
    Complex c1(4,5);
    c1.showComplex();
    Complex c2(2,3);
    c2.showComplex();

    Complex c;
    c.addComplex(c1,c2);
    c.showComplex();

    Complex result;
    result=c1.negComplex();
    result.showComplex();

    Complex c3;
    c3.subComplex(c1,c2);
    c3.showComplex();

    Complex ans;
    ans=c1.conjugate();
    ans.showComplex();


return 0;}

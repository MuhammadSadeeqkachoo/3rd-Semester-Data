#include<iostream>

using namespace std;


class Complex {

private :
    double re,im;
public:
    Complex();
    Complex(double r,double i);
    void showComplex();
    Complex addComplex(Complex c1);
    Complex negComplex();
    Complex subComplex(Complex c1);
    Complex conjugate();

    };

    Complex::Complex(){re=5;im =3.0;}

    Complex::Complex(double r,double i){
    re=r;im=i;}

    void Complex::showComplex(){
        if(im>=0)
    cout<<re<<"+i"<<im<<endl;
        else{
            cout<<re<<"-i"<<-im<<endl;
        }
         }

    Complex Complex::addComplex(Complex c1){
    re=c1.re+re;
    im=c1.im+im;
    }

    Complex Complex::negComplex(){
    Complex temp;
    temp.re=-re;
    temp.im=-im;
    return temp;
    }

    Complex Complex::subComplex(Complex c1){
    re=c1.re-re;
    im=c1.im-im;
    }

    Complex Complex::conjugate(){
    Complex t;
    t.re=re;
    t.im=-im;
    return t;
    }



int main (){
    Complex c1(3.0,2.5);
    cout<<"c1 :";
    c1.showComplex();
    Complex c2(5.0,3.0);
    cout<<"c2 :";
    c2.showComplex();

    Complex c;
    c.addComplex(c1);
    cout<<"Addition :";
    c.showComplex();

    Complex result;
    result=c1.negComplex();
    cout<<"negate :";
    result.showComplex();

    Complex c3;
    c3.subComplex(c1);
    cout<<"Subtraction :";
    c3.showComplex();

    Complex ans;
    ans=c1.conjugate();
    cout<<"Conjugate :";
    ans.showComplex();


return 0;}

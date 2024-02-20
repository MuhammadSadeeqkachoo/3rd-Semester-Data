#include<iostream>

using namespace std;

//Class complex with 2 data members and 7 members functions

class Complex{
    private:
    double re,im;
    static int countobject;

    public:
        Complex();
        Complex(double r,double i);
        void setRe(double r);
        void setIm(double i);
        double getRe() const;
        double getIm() const;
        static int getcount();
        void showComplex() const;
        ~Complex();
};
        int Complex::countobject=0;

        Complex::Complex(){re=0.0;im=0.0;countobject++;}

        Complex::Complex(double r,double i){re=r;im=i;countobject++;}

        void Complex::setRe(double r){re=r;}

        void Complex::setIm(double i){im=i;}

        double Complex::getRe()const{return re;}

        double Complex::getIm()const{return im;}

        int Complex:: getcount(){return countobject;}

        void Complex::showComplex()const{

        if(im>=0){cout<<"Complex Number: "<<re<<"+i"<<im<<endl;}

        else{cout<<"Complex Number: "<<re<<"-i"<<-im<<endl;}
        }

        Complex::~Complex(){cout<<"Object destroyed "<<endl;}

const int size=3;


int main(){
  /*  cout<<"Initial stage count: "<<Complex::getcount()<<endl;

    Complex C[size];
    double r,i;
    for(int num=0;num<size;num++){
        cout<<"Enter re,im ";
        cin>>r>>i;
        C[num].setRe(r);
        C[num].setIm(i);
    }

    for(int num=0;num<size;num++){C[num].showComplex();}

    cout<<"Final stage count: "<<Complex::getcount()<<endl;*/

    Complex *C=new Complex();
    C->setRe(2);
    C->setIm(5);
    C->showComplex();
    delete C;

return 0;}

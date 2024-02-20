#include<iostream>
using namespace std;

class employee{
    char *name;
    char *department;
    double salary;
    double years;
    public:

    employee();
    employee(char* n,char* d,double s,double y);
    void input();
    void show();
    ~employee();
    };

        employee::employee(){salary=5000;years=0;}

        employee::employee(char* n,char* d,double s,double y){
        *name=*n;
        *department=*d;
        salary=s;
        years=y;
        }

    void employee::input(){
        cout<<"Name :";
        cin>>*name;
        cout<<"Department :";
        cin>>*department;
        cout<<"salary :";
        cin>>salary;
        cout<<"years : ";
        cin>>years;
    }

    void employee::show(){
    cout<<"Name :"<<*name<<endl;
    cout<<"Department :"<<*department<<endl;
    cout<<"salary : "<<salary<<endl;
    cout<<"years : "<<years<<endl;
    }


int main(){


return 0;}

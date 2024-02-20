#include<iostream>

using namespace std;

class employee{

private:
    char* name;
    char* department;
    double salary,years;

public:

    char getname(){return *name;}

    char getdepartment(){return *department;}

    double getsalary(){return salary;}

    double getyears(){return years;}

    void setname(char* n){name=n;}
    void setdepartment(char* d){department=d;}
    void setsalary(double s){salary=s;}
    void setyears(double y){years=y;}


    employee()
    {
            name="";
            department="";
            salary=0;
            years=0;
    }

    employee(char* n,char* d,double s,double y)
    {
        name=n;
        department=d;
        salary=s;
        years=y;
    }

    employee(employee &obj)
    {
        name=new char;
        *name=*(obj.name);
        department=new char*;
        *department=*(obj.department);
        salary=obj.salary;
        years=obj.years;
    }

    void input(){

        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter department : ";
        cin>>department;
        cout<<"Enter Salary : ";
        cin>>salary;
        cout<<"Enter years : ";
        cin>>years;
    }

    void Display(){

        cout<<"Name : "<<*name<<endl;
        cout<<"Department : "<<*department<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"Years : "<<years<<endl;
    }

    ~employee()
    {
    delete name;
    delete department;
    }



};

int main()
{
    employee e1,e2,e3;
    e1.input();
    e1.Display();



return 0;
}

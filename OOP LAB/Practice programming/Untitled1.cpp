#include<iostream>

using namespace std;

class student{
int age;
double gpa;
char* name;


public:
    int getage(){return age;}
    double getgpa(){return gpa;}
    char* getname(){return name;}

    void setage(int a){age = a;}
    void setgpa(double g){gpa=g;}
    void setname(char* n){name=n;}

    void display(){
    cout<<"Name : "<<name<<endl;
    cout<<"Gpa : "<<gpa<<endl;
    cout<<"Age : "<<age<<endl;}
    };

    int main(){
        student c;
        c.setage(5);
        c.setgpa(3.4);
        c.setname("MUHAMMAD SADEEQ 2");
        c.display();
}

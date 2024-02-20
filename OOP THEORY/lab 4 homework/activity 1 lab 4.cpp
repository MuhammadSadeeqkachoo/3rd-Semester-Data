#include<iostream>
#include <string>
#include <cstring>

using namespace std;

class employee{
    char* name;
    char* department;
    double salary,period;

   public:
    employee():name("M.SADEEQ"),department("Computer systems"),salary(5000),period(45){}

    employee(char* n,char* d,double s,double p){
    name=n;
    department =d;
    salary=s;
    period=p;}

   employee(const employee &e)
   {cout << "\nIn Custom Copy Constructor [Deep]" << endl;
   int len = strlen(e.name);
   name = new char[len+1];
   strcpy(name,e.name);
   int leng = strlen(e.department);
   department = new char[len+1];
   strcpy(department,e.department);
   salary=e.salary;
   period=e.period;}

   ~employee(){
cout<<"Terminating Object"<<endl;
delete[]name;}

void show(){
cout<<"employee Data"<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Department: "<<department<<endl;
cout<<"Salary: "<<salary<<endl;
cout<<"Period: "<<period<<endl;
}


};



int main(){
employee e1("Muhammad Sadeeq",21,3.5);
e1.show();
employee e2(e1); s2.show();
employee e3(e1); s3.show();

return 0;
}

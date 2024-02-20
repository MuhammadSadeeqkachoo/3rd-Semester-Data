#include<iostream>
#include<string.h>


using namespace std;

class Employee {
private:
    char* name;
    char* department;
    double salary;
    double years;

public:
    // No-argument constructor
    Employee() {
        name = new char[10];
        strcpy(name, "xyz");
        department = new char[10];
        strcpy(department, "xyz");
        salary = 0.0;
        years = 0.0;
    }

    // 4-argument constructor
    Employee(const char* n, const char* d, double s, double y) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        department = new char[strlen(d) + 1];
        strcpy(department, d);
        salary = s;
        years = y;
    }

    // Copy constructor
    Employee(const Employee &e) {
        name = new char[strlen(e.name) + 1];
        strcpy(name, e.name);
        department = new char[strlen(e.department) + 1];
        strcpy(department, e.department);
        salary = e.salary;
        years = e.years;
    }

    // Getter and Setter functions
    char* getName() {
        return name;
    }
    void setName(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    char* getDepartment() {
        return department;
    }
    void setDepartment(const char* d) {
        department = new char[strlen(d) + 1];
        strcpy(department, d);
    }
    double getSalary() {
        return salary;
    }
    void setSalary(double s) {
        salary = s;
    }
    double getyears() {
        return years;
    }
    void setyears(double y) {
        years = y;
    }

    // Input function
    void input() {
        char n[100], d[100];
        double s, y;
        cout << "Enter name: ";
        cin.getline(n, 100);
        setName(n);
        cout << "Enter department: ";
        cin.getline(d, 100);
        setDepartment(d);
        cout << "Enter salary: ";
        cin >> s;
        setSalary(s);
        cout << "Enter period of service: ";
        cin >> y;
        setyears(y);
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
        cout << "Period of Service: " << years << endl;
    }

    // Destructor
    ~Employee() {
        delete[] name;
        delete[] department;
    }
};

// Driver program
int main() {
    Employee e1;
    e1.input();
    e1.display();
    }

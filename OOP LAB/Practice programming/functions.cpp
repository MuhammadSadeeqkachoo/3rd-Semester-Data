#include<iostream>
#define line <<endl;

using namespace std;

int sum(int *x,int *y){

*x=*x+*y;
}


int main(){
    int a,b;

    cin>>a>>b;
    cout<<"value of a = "<<a line;
    cout<<"value of b = "<<b line;

    sum(&a,&b);
    cout<<"The sum of a and b = "<<a;



return 0;}

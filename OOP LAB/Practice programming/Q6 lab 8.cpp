#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int *p=&num;
    int sum=0;
    int *p2;
    p2=&sum;

    for(int i=0;i<=*p;i+=2){
    *p2=*p2+i;}
    cout<<"SUM IS = "<<*p2;
return 0;}

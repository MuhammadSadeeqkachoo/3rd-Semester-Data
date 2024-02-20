#include<iostream>
using namespace std;

int main(){
    int num,snum,*p;
    snum=0;
    p=&snum;

    cout<<"Enter Natural number : ";
    cin>>num;

    for(int i=1;i<=num;i++){
        (*p)++;
        cout<<*p<<" ";}
        return 0;}

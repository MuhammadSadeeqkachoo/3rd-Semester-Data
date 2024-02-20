#include<iostream>

using namespace std;


int main(){

         int arr[5]={1,2,3,4,5};

         int *p;

         p=arr+3;

         cout<<*p<<endl;

         *p=40;

         cout<<*p<<endl;

         cout<<*(p+1)<<endl;//offset operator and derefrencing

         *p=50;

         cout<<*p<<endl;

         return 0;

         }

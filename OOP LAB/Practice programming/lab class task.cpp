#include<iostream>

using namespace std;

average(int *arr,int s){


*arr=(*arr+*(arr+1)+*(arr+2)+*(arr+3)+*(arr+4))/s;
return *arr;
}



int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"Average = "<<average(arr,5);



}

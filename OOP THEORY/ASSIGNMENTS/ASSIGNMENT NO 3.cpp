#include<iostream>

using namespace std;
int flag;
class Set{
    int arr[50];

public:
    Set(){
        for(int i=0;i<50;i++){
            arr[i]=0;
    }}

    void Insert(){
        cout<<"Enter array elements one by one : ";
        for(int i=0;i<50;i++){
            arr[i]=1;
        }
    }

    void Delete(){
        for(int i=0;i<50;i++){
            arr[i]=0;
        }

    }

    Set operator +(Set c1){


    Set operator *(Set c1){

    }

    Set operator ~(){

    }

    void Display(){
        cout<<"Elements of array :";
        for(int i=0;i<50;i++){
            cout<<","<<arr[i];
        }

    }





};

int main(){
    Set a1,a2;
    a1.Insert();
    a3=a1+a2;

return 0;}

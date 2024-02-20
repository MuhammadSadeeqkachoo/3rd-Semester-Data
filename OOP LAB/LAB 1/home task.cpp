#include<iostream>

using namespace std;


class Heater{
 private:
 int temperature;

 public:
     //constructor
    Heater(){
    temperature = 15;
    }

    //mutators
    int warmer(){
    return temperature+5;}

    int cooler(){
    return temperature-5;}


    //accessor

    int access(){
        return temperature;}

};



int main (){

    Heater h1;
    cout<<"Normal temperture "<<h1.access();
    cout<<"Cool temperture "<<h1.cooler();
    cout<<"\nWarm temperture "<<h1.warmer();


return 0;}

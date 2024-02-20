#include<iostream>

using namespace std;

class Point{

private:
    int x,y;
public:
    Point(){}

    Point(int ix,int iy){
    x=ix;
    y=iy;}

    const void setx(int ix){
    x=ix;}

    const void sety(int iy){
    y=iy;}

    int getx(){
        return x;}

    int gety(){
        return y;}

    void Display(){
    cout<<"\n("<<x<<","<<y<<")"<<endl;}

};



int main(){

    Point p1(0,0),p2(5,2);
    p1.Display();
    p2.Display();
    p1.setx(2);
    p1.sety(3);
    p1.Display();
    p2.setx(6);
    p2.sety(3);
    p2.Display();

return 0;}

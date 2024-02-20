#include<iostream>
using namespace std;

class Set
{
private:
    int Array[50];
public:
    Set(){
        for (int i = 0; i < 50; i++)
            Array[i] = 0;}

    void Insert(int value){
        if (value >= 0 && value <= 49)
            Array[value] = 1;}

    void Remove(int value){
        if (value >= 0 && value <= 49)
            Array[value] = 0;}

    Set operator+(const Set& object){
        Set union_set;
        for (int i = 0; i < 50; i++)
            union_set.Array[i] = Array[i] || object.Array[i];
        return union_set;}

    Set operator*(const Set& object){
        Set intersection_set;
        for (int i = 0; i < 50; i++)
            intersection_set.Array[i] = Array[i] && object.Array[i];
        return intersection_set;}

    Set operator~(){
        Set complement_set;
        for (int i = 0; i < 50; i++)
            complement_set.Array[i] = !Array[i];
        return complement_set;}

    void display(){
        for (int i = 0; i < 50; i++)
                cout << Array[i] << " ";}
};

int main(){
    Set s1,s2,s3;
    for(int i=0;i<50;i++){if(i%2==1)s1.Insert(i);}
    cout<<"Displaying s1 and s2 "<<endl;
    s1.display();
    cout<<endl;
    s2.display();
    s3=s2+s1;
    cout<<endl;
    cout<<"Union :"<<endl;
    s3.display();
    cout<<endl;
    s3=s3*s1;
    cout<<"Intersection :"<<endl;
    s3.display();
    cout<<endl;
    s3=~s3;
    cout<<"Compliment :"<<endl;
    s3.display();

return 0;}

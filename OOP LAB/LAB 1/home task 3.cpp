#include<iostream>

using namespace std;

class BankAccount{
   private:
       int money=6000;

   public:

    int deposit(){
    int D;
    cout<<"Enter amount to be Deposit ";
    cin>>D;
    money=money+D;
    D=money;
    return D;}


    int withdrawal(){
        if(money<=500){
            cout<<"Insufficient Balance "<<endl;
        }
        else{
        int W;
        cout<<"Enter amount to withdraw ";
        cin>>W;
        money=money-W;
        W=money;}}


    void display(){
    cout<<"Balance = Rs "<<money;}



};

int main (){
    int x;
    BankAccount acc;
while(true){

    cout<<"\n\nPress 1 for displaying balance "<<endl;
    cout<<"Press 2 deposit money "<<endl;
    cout<<"Press 3 withdraw "<<endl;
    cin>>x;

switch(x){

        case 1:
            acc.display();
            break;
        case 2:
            acc.deposit();
            break;
        case 3:
            acc.withdrawal();
            break;
            }}


return 0;}

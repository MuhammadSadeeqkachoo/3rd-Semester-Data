#include<iostream>

using namespace std;

int add(int x ,int y){
return x+y;
}

int sub(int a,int b){

return a-b;
}

int oper(int e,int f, int(*p)(int,int)){

int sum;
sum=(*p)(e,f);
return sum;
}


int main(){

    int m,n;
    m=oper(4,5,add);
    cout<<m;


}

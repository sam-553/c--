#include<iostream>
using namespace std;
int main(){
    int a=2,b=4;
    cout<<"Before swap a="<<a<<" b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"after swap a="<<a<<" b="<<b<<endl;
}


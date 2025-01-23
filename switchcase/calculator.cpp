#include<iostream>
using namespace std;
int main(){
    char op;
    cout<<"Enter the opreation you want to perform: ";
    cin>>op;
    int a=5,b=3;
switch (op)
{
case '+':
    cout <<"the sum of a+b is :" <<a+b <<endl;
    break;
case '-':;
    cout <<"the sub of a-b is :" <<a-b <<endl;
    break;
case '*':
    cout <<"the mul of a*b is :" <<a*b <<endl;
    break;
case '/':
    cout <<"the div of a/b is :" <<a/b <<endl;
    break;
case '%':
    cout <<"the mod of a%b is :" <<a%b <<endl;
    break;


default:
    cout<<"Invalid operation";
    break;
}

      
}
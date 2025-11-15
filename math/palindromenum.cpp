#include<iostream>
using namespace std;
bool palindrome(int num){
int temp=num;
int rev=0;
while(num!=0){
    int digit=num%10;
    rev=(rev*10)+digit;
    num=num/10;
}
return temp==rev;

}
int main(){
    int num=121;
    if(palindrome(num)){
        cout<<num << " "<<"is a palindrome number";
    }else{
        cout<<num << " "<<"is not a palindrome number";
    }

}

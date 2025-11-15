#include<iostream>
using namespace std;
int reverse(int num){
    int rev=0;
    while(num!=0){
        int digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    return rev;
}
int main(){
    int num=4567;
    cout<<reverse(num);
}
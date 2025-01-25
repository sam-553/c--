#include<iostream>
using namespace std;
int fab(int n ,int a=0,int b=1){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    for(int i=1;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
    }
    return a;
}
int main(){
cout<<fab(10);
}
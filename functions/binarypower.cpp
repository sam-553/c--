#include<iostream>
using namespace std;

int main(){
    int bF,x,n,ans=1;
    
  
    cout<<"enter the base value"<<endl;
    cin>>x;
    cout<<"enter the power value"<<endl;
    cin>>n;
    bF=n;
    if(n<0){
        x=1/x;
        bF=-bF;
    }
    while(bF>0){
        if(bF%2==1){
        ans*=x;
   
        }
        x*=x;
        bF/=2;
        }
        
    cout<<"value"<<ans;
}
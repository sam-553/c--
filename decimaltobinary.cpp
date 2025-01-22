#include<iostream>  
#include<math.h>
using namespace std;
int main()
{
   int n;
   cout<<"Enter a decimal number: ";
    cin>>n;
    int i=1;
    int ans=0;
    while(n!=0){
     int bit=n&1;
        ans=ans+bit*pow(10,i);
        n=n>>1;
        i++;

    }
    cout<<"The binary number is: "<<ans <<endl;
}
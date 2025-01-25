// #include<iostream>
// using namespace std;
// int main(){
//     int n=7;
//     int m=n;
//     int mask=0;
//     while(m!=0){
//         mask=(mask<<1)|1;
//         m=m>>1;
//     }
//     int ans=(~n)&mask;
//     cout<<ans;
// }

// The above code is used to find the 1's complement of a number. The 1's complement of a number is obtained by changing all the 1's to 0's and all the 0's to 1's@

#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int n;
   int s=0;
   int i=1;
    cout<<"Enter the decimal number: ";
    cin>>n;
    while(n!=0){
        int bit=n&1;
        s=s+bit*pow(10,i);
        n=n>>1;
        i++;
    }
    cout<<"The binary number is: "<<s<<endl;
}
#include<iostream>
using namespace std;
int printarray(int arr[],int n){
   for(int i=0;i<=n;i++)
   {
       cout<<arr[i]<<" ";
 
   }
}
int main()
{
   int arr[8];
   cout<<"value at index 0: "<<arr[0]<<endl;

   int arr1[5]={1,2,3,4,5};
   int n=3;
   printarray(arr1,n);
cout<<endl;
   int arr2[5]={0};
   printarray(arr2,n);

   return 0;
   
}


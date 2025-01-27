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
   int arr2size=sizeof(arr2)/sizeof(int);
   cout<<endl<<"size of arr2: "<<arr2size<<endl;
   //character array
   char arr3[5]={'a','b','c','d','e'};
   cout<<"character array at 4 index: "<<arr3[4]<<endl;

   return 0;
   
}


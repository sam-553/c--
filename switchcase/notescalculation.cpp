#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the amount: ";
    cin>>n;
    int s;
    cout<<"Enter the  size of notes: "<<endl;
    cin>>s;
    switch (s)
    {
    case 2000:
        cout<<"The number of 2000 rupees notes are: "<<n/2000<<endl; 
        break;
    case 500:
        cout<<"The number of 500 rupees notes are: "<<n/500<<endl; 
        break;
    case 200:
        cout<<"The number of 200 rupees notes are: "<<n/200<<endl; 
        break;
    case 100:
        cout<<"The number of 100 rupees notes are: "<<n/100<<endl; 
        break;
    case 50:
        cout<<"The number of 50 rupees notes are: "<<n/50<<endl; 
        break;
    case 20:
        cout<<"The number of 20 rupees notes are: "<<n/20<<endl; 
        break;
    case 10:
        cout<<"The number of 10 rupees notes are: "<<n/10<<endl; 
        break;
    case 1:
        cout<<"The number of 1 rupees notes are: "<<n/1<<endl; 
        break;
    
    default:
        break;
    }
    
}
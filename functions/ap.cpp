#include<iostream>

int arithmaticProgression(int a, int d, int n)
{
    return a+(n-1)*d;
}


using namespace std;
int main()
{
    int a,d,n;
    cout<<"Enter the first term of the AP: ";
    cin>>a;
    cout<<"Enter the common difference of the AP: ";
    cin>>d;
    cout<<"Enter the number of terms of the AP: ";
    cin>>n;
    cout<<"The nth term of the AP is: "<<arithmaticProgression(a,d,n);
    return 0;
    
}
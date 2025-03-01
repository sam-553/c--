#include<iostream>
using namespace std;
int main(){
    int a[6]={1,2,3,4,5,7};
    int largest=INT16_MIN;
    int secondlargest=INT16_MIN;
    for(int i=0;i<=6;i++){
        if(a[i]>largest){
            largest=a[i];
            secondlargest=largest;
        }else{
            if(a[i]<secondlargest && a[i]<largest){
                secondlargest=a[i];
            }
        }

    }
    cout<<"largest number is " <<largest<<endl;
    cout<<"largest number is " <<secondlargest;

}
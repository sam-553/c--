#include<iostream>
using namespace std;
bool isArmstrong(int num){
int sum=0;
int temp=num;
while(num!=0){
int dig=num%10;
sum +=(dig*dig*dig);
num/=10;

}
return sum==temp;
}
int main(){
    int num=111;
    if(isArmstrong(num)){
        cout<<"is an armstrong number"<<endl;
    }else{
        cout<<"not an armstrong number"<<endl;
    }

}

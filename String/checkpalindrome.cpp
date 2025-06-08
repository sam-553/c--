#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isAlphanum(char ch){
    if( ch>='0'&&ch<='9' ||ch>='A' &&ch<=  'Z'||ch>= 'a' &&ch<='z' ){
        return true;
    }
    return false;
}
bool ispalindrome(string str){
    int s=0,e=str.length()-1;
while(s<e){
    if(!isAlphanum(str[s])){
        s++;
        continue;
    }
    if(!isAlphanum(str[e])){
        e--;
        continue;
    }
    if(tolower(str[s])!=tolower(str[e])){
        return false;
    }
    s++;
    e--;
}
return true;
}



int main(){
string str;
cout<<"Enter the string to check palindrome or not:";
getline(cin,str);
cout<<ispalindrome(str)<<endl;
}
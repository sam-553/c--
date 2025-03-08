#include<iostream>
#include<string>
#include<sstream>
#include<cctype>
using namespace std;
bool isVowel(char c){
    c=tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
void countVowel(const string &s ){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(isVowel(s[i])){
            count++;
        }
    }
    cout<<"vowel in string is "<<count;
}
int main(){
    cout<<"enter a string";
string s;
getline(cin,s);
countVowel(s);
return 0;
}
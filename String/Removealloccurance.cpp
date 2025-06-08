#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string removealloccurance(string str,string ch){
    while(str.length()>0 && str.find(ch)<str.length()){
        str.erase(str.find(ch),ch.length());
    }
    return str;
}
int main(){
    string str;
    cout<<"enter the string";
    getline(cin,str);
    string ch;
    cout<<"enter character to remove";
    getline(cin,ch);
    cout<<removealloccurance(str,ch)<<endl;

}
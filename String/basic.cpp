#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    char Jhh[] = {'a', 'b', 'c', 'd', '\0'};
    int len = 0;

    
    
    // while (Jhh[len] != '\0') {
    //     len++;
    // }
    // cout << "Length: " << len << endl;

       string str1="hello";
         string str2="world";
         string str3=str1+str2;
         cout<<str3<<endl;
         cout<<str3.length()<<endl;
         reverse(str1.begin(), str1.end());
         cout<<str1<<endl;
         cout<<(str1==str2)<<endl;
         cout<<(str1<str2)<<endl;

    

    return 0;
}

#include<iostream>
#include<string>
using namespace std;

string stringcompression(string str, int n) {
    int idx = 0;
    for (int i = 0; i < n; ) {
        char ch = str[i];
        int count = 0;
        while (i < n && str[i] == ch) {
            count++;
            i++;
        }

        str[idx++] = ch;

        if (count > 1) {
            string chr = to_string(count);
            for (char dig : chr) {
                str[idx++] = dig;
            }
        }
    }
    str.resize(idx);  
    return str;
}

int main() {
    string str = "aabcccc";
    int n = str.length();
    string compressed = stringcompression(str, n);
    cout << compressed << endl;
    return 0;
}

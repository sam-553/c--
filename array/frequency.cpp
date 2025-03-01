#include<iostream>
using namespace std;

int main() {
    int a[9] = {3, 4, 4, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);  
    
    for (int i = 0; i < n; i++) {
        bool found = false;
        
        
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                found = true;
                break;
            }
        }

        
        if (!found) {
            int count = 1;
            for (int k = i + 1; k < n; k++) {
                if (a[i] == a[k]) {
                    count++;
                }
            }
            cout << a[i] << " : " << count << endl;
        }
    }

    return 0;
}

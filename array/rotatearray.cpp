#include <iostream>
using namespace std;

int main() {
    int a[6] = {1, 2, 3, 4,7, 5};

    int s=0,e =5;
    while(s<e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    
   
    // for (int i = 0; i < 5; i++) { 
    //     for (int j = i + 1; j < 6; j++) { 
    //         if (a[i] < a[j]) { 
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }

   
    // for (int i = 0; i < 6; i++) {
    //     cout << a[i] << " ";
    // }
    // return 0;
}

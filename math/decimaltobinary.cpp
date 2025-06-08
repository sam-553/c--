#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    int i = 1;

    cout << "Enter a decimal number: ";
    cin >> n;

    while (n >0)
    {
        int rem=n%2;
        ans=ans+(rem*i);
        n=n/2;
        i=i*10;
       
        
    }

    cout << "Binary equivalent: " << ans << endl;
}

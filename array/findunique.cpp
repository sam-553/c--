#include <iostream>
using namespace std;
int main()
{
    int a[11] = {2, 3, 4, 5, 1,1,7 ,2, 3, 4, 5};
    int ans = 0;

    for (int i = 0; i <11; i++)
    {
        ans = ans ^ a[i];
        
    }
    cout << ans << endl;
}
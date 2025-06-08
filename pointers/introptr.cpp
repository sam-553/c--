#include <iostream>
using namespace std;
// pass by refrence using alias
// void changeA(int &b){
//     b=10;
// }
// pass by refrence using pointer
void changeA(int* b){
    *b=10;
}
int main()
{
    // int a = 10;
    // int *p = &a;
    // int **s= &p;
    // cout << a << endl;

    // cout << *(&a) << endl;

    // cout << *p << endl;
    // cout<<s;

int a=20;
changeA(&a);
cout<<a;

int arr[]={1,2,3,4,5};
cout<<*arr+4;



}
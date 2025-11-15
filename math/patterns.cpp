// * * * * *
// * * * * *
// * * * * * 
// * * * * *
/* #include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"Enter the number of rows: ";
     cin>>n;
     for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
     }
     
}*/
// 1 1 1 1 
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//      cout<<"Enter the number of rows: ";
//      cin>>n;
//      for( i=1;i<=n;i++){
//         for( j=1;j<=n;j++){
//             cout <<i<<" ";
//         }
//         cout<<endl;
//      }
     
// }
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//      cout<<"Enter the number of rows: ";
//      cin>>n;
//      for( i=1;i<=n;i++){
//         for( j=1;j<=n;j++){
//             cout <<j<<" ";
//         }
//         cout<<endl;
//      }
     
// }
// * 
// * *
// * * *
// * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//      cout<<"Enter the number of rows: ";
//      cin>>n;
//      for( i=1;i<=n;i++){
//         for( j=1;j<=i;j++){
//             cout <<"*" <<" ";
//         }
//         cout<<endl;
//      }
     
// }
// * * * * 
// * * *
// * *
// *
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//      cout<<"Enter the number of rows: ";
//      cin>>n;
//      for( i=1;i<=n;i++){
//         for( j=i;j<=n;j++){
//             cout <<"*"<<" ";
//         }
//         cout<<endl;
//      }
     
// }

// 1 2 3 
// 4 5 6
// 7 8 9
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3,i,j;
//      int count=1;
//      for( i=1;i<=n;i++){
//         for( j=1;j<=n;j++){
//             cout <<count <<" ";
//             count++;
//         }
//         cout<<endl;
//      }
     
// }

// 3 2 1 
// 3 2 1
// 3 2 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n=3,i,j;
   
//      for( i=1;i<=n;i++){
//         for( j=1;j<=n;j++){
//             cout <<n-j+1 <<" ";
           
//         }
//         cout<<endl;
//      }
     
// }  

//     *
//     *
// * * * * *
//     *
//     *

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5,i,j;
     
//      int mid=(n+1)/2;
//      for( i=1;i<=n;i++){
//         for( j=1;j<=n;j++){
//             if(i==mid||j==mid){
//                 cout <<"*"<<" ";
                
//             }else{
//                 cout <<" "<<" ";
//             }
//         }
//         cout<<endl;
//      }
//     } 

// * * * * * 
// *       *
// *       *
// *       *
// * * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5,i,j;
     
     
//      for( i=1;i<=n;i++){
//         for( j=1;j<=n;j++){
//             if(i==1||i==n||j==1||j==n){
//                 cout <<"*"<<" ";
                
//             }else{
//                 cout <<" "<<" ";
//             }
//         }
//         cout<<endl;
//      }
//     }
   

// *     *
//  *   *
//   * *
//    *
//   * *
//  *   *
// *     *
// #include<iostream>
// using namespace std;
// int main(){
//     int n=7,i,j;
     
     
//      for( i=0;i<n;i++){
//         for( j=0;j<n;j++){
//             if(i==j||j==n-i-1){
//                 cout <<"*"<<"";
                
//             }else{
//                 cout <<""<<" ";
//             }
//         }
//         cout<<endl;
//      }
//     }
  
//    *   
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *


// #include<iostream>
// using namespace std;
// int main(){
//     int n=7,i,j;
     
     
//      for( i=0;i<n;i++){
//         for( j=0;j<n;j++){
//             if(i+j==n/2||j-i==n/2||i-j==n/2||i+j==n+(n/2)-1){
//                 cout <<"*"<<"";
                
//             }else{
//                 cout <<""<<" ";
//             }
//         }
//         cout<<endl;
//      }
//     }


#include<iostream>
using namespace std;
int main(){
    int n=7,i,j;
     
     
     for( i=1;i<=n;i++){
        for( j=1;j<=n-i;j++){
           cout<<" ";
        }
        
        for( j=1;j<=i;j++){
           cout<<"* ";
        }
        cout<<endl;
     }
    }
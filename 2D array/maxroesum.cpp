#include<iostream>
using namespace std;
int maxrowsum(int matrix[3][3],int rows,int cols){
     int maxSum=INT8_MIN;
     for(int i=0;i<rows;i++){
                int rowsumI=0;
        for(int j=0;j<cols;j++){
            rowsumI+=matrix[i][j];
        }
        maxSum=max(maxSum,rowsumI);
     }
     return maxSum;
}
int main(){
    int matrix[3][3]={{1,2,33},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
    cout<<maxrowsum(matrix,rows,cols);
}
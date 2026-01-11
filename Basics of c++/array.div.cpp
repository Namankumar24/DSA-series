#include<iostream>
using namespace std;

int main() {

    int row,col;

    cout<<"Enter the no. of rows and cols. of matrix..: "<< endl;
     cin>>row>>col;

    int matrix1[row][col], matrix2[row][col], sum[row][col];
     
    cout <<"Enter the elements of 1st matrix..:- "<<endl;
    for(int i= 0; i< row; i++){
        for(int j= 0; j< col; j++){
            cin>> matrix1[i][j];
        }
    }

    cout<<"Enter the elements of 2nd matrix..:- "<<endl;
    for(int i= 0; i< row; i++){
        for(int j= 0; j< col; j++){
            cin>>matrix2[i][j];
        }
    }

    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            sum[i][j]= matrix1[i][j] / matrix2[i][j];
        }
    }

    cout<<"Division of two matrtices using array is.. :- "<<endl;
     
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
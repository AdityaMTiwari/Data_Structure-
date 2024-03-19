#include<iostream>
using namespace std;
 
void Normal_matrix(int a[][4], int row, int col){
    for(int row1=0; row1<row; row1++){
            for(int col1=0; col1<col; col1++){
                cout<<a[row1][col1]<<" ";
            }
            cout<<endl;
    }
}
void TransposeOf2dArray1(int a[][4], int row, int col){   
            for(int col1=0; col1<col; col1++){
                for(int row1=0; row1<row; row1++){
                cout<<a[row1][col1]<<" ";
            }
            cout<<endl;
    }
}


int main(){
     int a[][4]={{1,2,3,4},{4,5,6,8},{46,6,8,9}};
     int row=3;
     int col=4;
      cout<<"Normal matrix"<<endl; 
     Normal_matrix(a, row, col);
      cout<<"Transpose matrix"<<endl; 
     TransposeOf2dArray1(a, row, col);
}
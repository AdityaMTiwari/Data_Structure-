#include<iostream>
//#include<vector>
using namespace std;
void printArray(int a[][4], int row, int col){
     for(int i=0;i<row;i++){
     for(int j=0;j<col;j++){
        cout<<a[i][j]<<" ";
}
cout<<endl;


     }
}
     void colwiseprint(int a[][4], int row, int col){
     for(int i=0;i<col;i++){
     for(int j=0;j<row;j++){
        cout<<a[j][i]<<" ";   
     }
     cout<<endl;
     }
     }                             

/* 2d Array  */

int main(){
     int a[][4]={{1,2,3,4},{4,5,6,8},{46,6,8,9}};
     int row=3;
     int col=4;
     colwiseprint(a, row, col);
}



#include<iostream>
#include<limits.h>
using namespace std;

int maximumNo(int a[][4],int row, int col){
    int max=INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(a[i][j]>max){
             max=a[i][j];
            
            }
            

        }
       
    }
  
 cout<<"Maximum No: "<<max<<endl; 
            }
     


int main(){

    int a[][4]={{1,2,3,4},{4,5,6,8},{46,6,8,9}};
     int row=3;
     int col=4;
     
     maximumNo(a,row,col);
}
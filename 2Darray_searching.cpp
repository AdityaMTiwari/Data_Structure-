#include<iostream>
using namespace std;

bool searching(int a[][4], int x, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(a[i][j]==x){
                cout<<"true"<<endl;
              break;
            }
            

        }
    }
   
                cout<<"false"<<endl;
            }
     


int main(){

    int a[][4]={{1,2,3,4},{4,5,6,8},{46,6,8,9}};
     int row=3;
     int col=4;
     int x=10;
     searching(a,x, row, col);
}
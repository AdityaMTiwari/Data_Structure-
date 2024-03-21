#include<bits/stc++.h>
using namespace std;
int board[11][11];
bool ispossible(int n,int row,int column){
    //same column
    for(int i= row-1; i>=0;i--){
        if(board[i][column]==1){
            return false;

        }
        //upper left diagonal
        for(int i=row-1, j=column-1; i>=0 && j>=0; i-- , j--){
            if([i][j]==1){
                return false;

            }
        }
        //upper right diagonal
        for(int i = row-1, j=column+1; i>=0 && j<n; i--,j++){
            if(boad[i][j]==1){
                return false;
            }
        } 
        return ture;
        
    }
}
void nqueenhelper(int n, int row){
    if(row==n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<board[i][j]<<" ";

            }

        }
        cout<<endl;
        return;

    }
    //place at all passible position and move to smaller problem
    for(int j= 0; j<n; j++){
        if(ispassible(n,row,j)){
            board[row][j]=1;
            nqueenhelper(n,roww+1);
            board[row][j]=0;
        }
    }
    return; 
}

void placequeen(int n){

}
int main(){
    placequeen(4);
    return 0;

}
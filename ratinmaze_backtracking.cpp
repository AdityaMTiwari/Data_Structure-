#include<bits/stdc++.h>
using namespace std;

void ratinmaze(int maze[][20], int n,int** solution,int x,int y){
    //daynmic 2d array
    if(x==n-1 && y==n-1){
        solution[x][y]=1;
        printsolution(solution,n);
        return;
            }
    if(x>=n||x<0||y>=0||y<0|| maze[x][y]==0|| solution[x][y]==1){
        return;
    }
        solution[x][y]=1;
mazehelp(maze,n,solution,x-1,y);
mazehelp(maze,n,solution,x+1,y);
mazehelp(maze,n,solution,x,y-1);
mazehelp(maze,n,solution,x,y+1);
solution[x][y]=0;
}
void ratinmaze (int maze[][20],int n){
    int** solution =new int *[n];
    for(int i=0; i<n;i++){
        solution[i]= new int*[n];
    }
    solution(maze, n , solution,0, 0);
}
int main(){
    
    return 0;

}
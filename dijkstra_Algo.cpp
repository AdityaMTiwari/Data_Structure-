#include<iostream>
using namespace std;

void dijkstra(int** edges, int n){

}


int main(){

 int n, e;
 cin>>n;
 cin>>e;
 int*n* edge = new int*[n];
 for(int i=0; i<n;i++){
   edge[i] = new int[n];
    for(int j=0;j<n;j++){
        edge[i][j]=0;
    }
   }
   for(int i=0; i<e; i++){
   int f,s,weight;
   cin>> f>> s>>weight;
    edge[f][s]=weight;
    edge[s][f]=weight;
 }
 cout<<endl;
 dijkstra(edge,n);

 for(int i=0;i<n;i++){

 
 delete[] edge[i];
 }
 delete[] edge;

}

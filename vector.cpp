#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v){
int n=v.size();
cout<<"print vectr: "<<endl;
for(int i=0; i<n; i++){
    cout<<v[i]<<endl;
  /*   cout<<"size: "<<v.size(); */
}
}
 


int main(){
    vector<int>v;
   /*  v.push_back(4);
     v.push_back(5);
      v.push_back(6);
       v.push_back(7);
       v.pop_back();
    v.pop_back();
       print(v);
 */
 int n;
 cin>>n;
 for(int i=0; i<n; i++){
    int d;
    cin>>d;
    v.push_back(d);
 }
 /* print(v);
 for(int i=5; i<10; i++){
    v.push_back(20);
 } */
print(v);
    
  
}
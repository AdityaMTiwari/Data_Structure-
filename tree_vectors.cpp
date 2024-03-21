#include<iostream>
#include<vector>
using namespace std;

int main(){
   // vector<T> *vp=new vector<int();//dynamic allocation
    vector<int> v; // static allocation
    for(int i=0;i<=100;i++){
        cout<<"capacity :"<<v.capacity()<<endl;
        cout<<"Size :"<<v.size()<<endl;
       v.push_back(i+1);
       
    }
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

   v[1]=100;
  // v[3]=1002;
   //v[4]=1234;

   v.push_back(23);
   v.push_back(234);
   v.pop_back();
   v.pop_back();

  // for(int i=0;i<v.size();i++){
  //  cout<<v[i]<<endl;
  // }
}

    /*cout<<v[0]<<endl;//using loop
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;
    cout<<v[6]<<endl;
    cout <<"size"<<v.size()<<endl;
    cout<<v.at(2)<<endl;
    cout<<v.at(6)<<endl;


}*/
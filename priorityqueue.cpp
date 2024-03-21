#include<iostream>
using namespace std;

#include<vector>
class priorityqueue{
    vector<int> pq;
    public:
    priorityqueue(){

    }
    bool isEmpty(){
        return pq.size()==0;

    }
    int getsize(){
        return pq.size();

    }
    int getMin(){
        if(isEmpty()){
            return 0;
        }
        return pq[0];
    }
    void insert(int element){
        pq.push_back(element);
        int childindex= pq.size()-1;
        while(childindex>0){
        int parentindex= (childindex-1)/2;
        if(pq[parentindex]>pq[childindex]){
            int temp= pq[childindex];
            pq[childindex]=pq[parentindex];
            pq[parentindex]=temp;
        }
        else{
            break;
        }
        childindex=parentindex;
    }
    }
    int removeMin(){
        if(isEmpty()){
            return 0;
        }
        int ans =pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();

        int parentindex=0;
        int leftChildindex= 2*parentindex+1;
        int rightChildindex=2*parentindex+2;
        while(leftChildindex<pq.size()){
            int minindex=parentindex;
            if(pq[minindex]>pq[leftChildindex]){
                minindex=leftChildindex;

            }
            if(rightChildindex<pq.size() && pq[rightChildindex]<pq[minindex]){
                minindex=rightChildindex;
            }
            if(minindex==parentindex){
                break;
            }
            int temp= pq[minindex];
            pq[minindex]=pq[parentindex];
            pq[parentindex]=temp;

            parentindex=minindex;
            leftChildindex=2*parentindex+1;
            rightChildindex=2*parentindex+2;

        }
        return ans;

    }


};
int main(){
    priorityqueue p;
     
     p.insert(100);
     p.insert(10);
     p.insert(15);
     p.insert(4);
     p.insert(17);
     p.insert(21);
     p.insert(67);

     cout<<p.getsize()<<endl;
     cout<<p.getMin()<<endl;

     while(!p.isEmpty()){
        cout<<p.removeMin()<<" ";

     }
     cout<<endl;


}
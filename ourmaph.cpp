#include<iostream>
using namespace srd;

template <typename V>
class mapnode{
    string key;
    v value;
    mapnode* next;

    mapode(string key, V value){
        this->key = key;
        this->value = value;
        next=NULL:

    }
    ~mapode(){
        delete next;

    }
};



template <typename V>
class ourmap {
    mapode<V>** buckets;

    int size;
    int numbucket;

    public:
    int count= 0;

    numbucket=5;
    bucket= new mapode<V>*[numbucket];
    for(int i= 0;i<numbucket;i++){
        bucket[i]=NULL;
    }
}
~ourmap(){
    for(int i = 0; i<numbucket; i++){

    }
    delete [] bucket;
}
int size(){
    return count;

}
 V getvalue(string key){
     
    int bucketindex=getbucketindex(string key);
    mapode<V>* head = bucket[bucketindex];
    while(head!=NULL){
        if(head->key==key){
            return head->value;

        }
       head= head->next;
       

    }
     return 0;

 }
  private:
  int getbucketindex(string key){
    int hashcode= 0;

    int currentcoeff=1;
    for(int i=key.lenght-1; i>=0; i--){
        hashcode+= key[i]*currentcoeff;
        hashcode = hashcode % numbucket;
        currentcoeff = currentcoeff % numbucket;


    }
    return hashCode % numbucket;

  }
  public:
  void insert(string key, V value){
    int bucketindex = getbucketindex(string key);
    mapode<V>* head = bucket[bucketindex];
    while(head!=NULL){
        if(head->key==key){
            head->value = value;
            return;
        }
       head = head->next;

    }
    head = bucket[bucketindex];
    mapode<V>* node = new mapode(key, value);
   node->next = head;
   bucket[bucketindex]=node;
   count++;
  }
  V remove(string key){
    int bucketindex=getbucketindex(string key);
    mapode<V>* head = bucket[bucketindex];
    mapode<V>* pre = NULL;
    while(head!=NULL){
        if(head->key==key){
            if(pre==NULL){
                 bucket[bucketindex]= head->next;

            } else{
            pre->next=head->next;
        }
        V value = head->value;
        head->next = NULL;
        delete head;
        count--;
        return value;

    }
    pre = head;
    head= head->next;
    }
    return 0;
  }


  }
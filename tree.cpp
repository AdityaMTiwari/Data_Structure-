#include<iostream>
#include<vector>
#include<Queue>
using namespace std;

template <typename T>
class TreeNode {
    public:
    T data;
    vector<TreeNode<T>*> children;  //tree node pointer store
    TreeNode(T data){
        this->data = data;

    }
    TreedeleteNode(){
        for(int i = 0; i<chldren.size(); i++){
delete children[i];
    }
    }

};
TreeNode<int>* takeinput1(){
    int x;
    cout<<"enter the root :"<<endl;
    cin>>x;
    TreeNode<int>* root=new TreeNode<int>(x);
     

    queue<TreeNode<int>*> pendingnodes;

    pendingnodes.push(root);
while(pendingnodes.size()!=0){
    TreeNode<int>* front = pendingnodes.front();
    pendingnodes.pop();
    cout<<"enter the number of child :"<<front->data<<endl;
    int o;
    cin>>o;
    for(int i = 0; i<o; i++){
        int p;
        cout<<"enter :"<<i<<"th child of"<<front->data<<endl;
        cin>>p;
        TreeNode<int>* child = new TreeNode<int>(p);
        front->children.push_back(child);
        pendingnodes.push(child);
    }
    }
    return root;
}
    
TreeNode<int>* takeinput(){
     int m;
    cout<<"enter the root :"<<endl;
    cin>>m;
    TreeNode<int>* root=new TreeNode<int>(m);
     
int n;
cout<<"enter the children of root :"<<m<<endl;
cin>>n;
for(int i=0; i<n; i++){
    TreeNode<int>* child=takeinput();
    root->children.push_back(child);



}
return root;
}
void printTree(TreeNode<int>* root){
    //not base case ,this is edge case.
    if(root==NULL){
        return;
    }
        cout<<root->data<<":";
        for(int i= 0; i<root->children.size(); i++){
            cout<<root->children[i]->data<<",";
        }
        cout<<endl;
        for(int i= 0; i<root->children.size(); i++){
           printTree(root->children[i]);

        }
    }
    void dpethofk(TreeNode<int>* root, int k){
        if(root==NULL){
            return;
        }
        if(k==0){
            cout<< root->data<<endl;

        }
        for(int i=0;i<root->children.size();i++){
            dpethofk(root->children[i],k-1);

        }

        
    }
    int numNodes(TreeNode<int>* root){
        if(root==NULL){
            return 0;
        }
        int ans=1;
        for(int i=0; i<root->children.size(); i++){
            ans+=numNodes(root->children[i]);
        }
        return ans;
    }
    void preorder( TreeNode<int>* root){
        if(root==NULL){
            return;
        }

        cout<<root->data<<" "; 
                for(int i=0; i<root->children.size(); i++){
preorder(root->children[i]);
                }
    }
    deleteTree(TreeNode<int>* root){
                           for(int i=0; i<root->children.size(); i++){
deleteTree(root->children[i]);
delete root;

    }
    }
    
int main (){

   /* TreeNode<int>* root=new TreeNode<int>(NULL);
   TreeNode<int>* node1=new TreeNode<int>(2);
    TreeNode<int>* node2=new TreeNode<int>(3);

    root->children.push_back(node1);
    root->children.push_back(node2);*/
    TreeNode<int>* root=takeinput1();
    printTree(root);
    cout<<"num :"<<numNodes(root)<<endl;
    cout<<"level 2:"<<endl;
   
    dpethofk(root,2);
     preorder(root);
     deleteTree(root);
     
}
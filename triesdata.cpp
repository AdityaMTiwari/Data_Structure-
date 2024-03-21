class trienode{
    public:
    char data;
    treenode **children;

    bool isterminal;

    treenode(char data){
        this->data=data;
        children = new treenode*[26];
        for(int i=0; i<26; i++){
            children[i]= NULL;
        }
        isterminal=false;


    }
};

class trei{
    trienode *root;

    public:

    trie(){
        root = new trieNode('\0');
    }
    void insertword(trienode *root, string word){
        //base case
        if(word.size()==0){
            root-> isterminal = true;
            return;
        }
        //small calculation
     int index = word[0]-'a';
     if(root->children[index]!=NULL){
        child = root->children[index];

     }
     else{
        child = new trienode(word[0]);
        root->children[index] = child;
          }

          // recursion call
      insertword(child, word.substr(1));
}
//for user
void insertword(string word){
    insertword(root,word);

}
};
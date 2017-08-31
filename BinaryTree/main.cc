/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node *root) {
    if(root==NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
    
}

/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/


void postOrder(node *root) {
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void inOrder(node *root) {
    if(root==NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}


/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        return root==NULL ? -1 : max(height(root->left), height(root->right))+1;
    }
/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void topL(node * root){
    if(root==NULL) return;
    topL(root->left);
    cout << root->data << " ";
}

void topR(node *root){
    if(root==NULL) return;
    cout << root->data << " ";
    topR(root->right);
}

void topView(node * root) {
    topL(root->left);
    cout << root->data << " ";
    topR(root->right);
}



/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
    queue<node*> q; q.push(root);
    while(!q.empty()){
        node *t = q.front(); q.pop();
        if(t->left != NULL){
            q.push(t->left);
        }
        if(t->right != NULL){
            q.push(t->right);
        }
        cout << t->data << " ";
    }  
}

/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value) {
    if(root==NULL){
        node *temp=new node; temp->data = value; temp->left=temp->right = NULL;
        root = temp;
    }
    else if(root->data > value){
        root->left = insert(root->left, value);
    }
    else{
        root->right = insert(root->right, value);
    }
   return root;
}

void decode_huff(node * root,string s){
    node *t = root;
        for(char c:s){
            c == '0' ? t=t->left : t=t->right;
            if(t->data){
                cout << t->data;
                t = root;
            }
    }
}


/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2)
{
    int v = root->data;
    if(v < v1 && v < v2){
            return lca(root->left, v1, v2);    
    }
    else if(v > v1 && v>v2){
        return lca(root->right, v1, v2);
    }
    else return root;
}




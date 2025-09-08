#include<iostream>
using namespace std;

struct node
{
    node *left;
    int item;
    node *right;
};

class BST
{
    private:
        node *root;
    protected:
        void preorderrec(node*);
        void inorderrec(node*);
        void postorderrec(node*);
        node* deleteNode(node*,int);
    public:
        BST();
        bool isEmpty();
        void insert(int);
        void preorder();
        void inorder();
        void postorder();
        void del(int);
        node* search(int);
        ~BST();
};

BST :: BST()
{
    root=nullptr;
}

bool BST :: isEmpty()
{
    return root==nullptr; //root me null hoga mtlb tree empty hoga
}

void BST :: insert(int data)
{
    node *ptr; //this pointer is for traverssing
    node *n=new node;
    n->left=nullptr; //new node hamesha leaf pe judega to left and right dono me null ayega
    n->item==data;
    n->right=nullptr;
    if(isEmpty())
        root=n;
    else
    {
        ptr=root;  //ptr me root ki value copy ki traversing ke liye
        while(ptr->item!=data) //joparyant ptr->item data chya equal honar nhi toparaynt loop chalnar 
        {
            if(data < ptr->item) //insert in left subtree
            {
                if(ptr->left!=nullptr) //means left me subtree hain wo null nhi hain agar nhi hota to vaha pe new node ko insert kr dete
                    ptr=ptr->left;
                else//ptr ke left me null hain 
                {
                    ptr->left=n; //ptr ke left me naya node assign kar dia
                    break; //Without this break, the while loop would continue even after the insertion is complete.
                }

            }
            else //insert in right subtree
            {
                if(ptr->right!=nullptr)
                    ptr=ptr->right;
                else
                {
                    ptr->right=n;
                    break; 
                }
            }
        }
        //while loop end ho gaya mtlb ye nhi ki node insert hua hi hoga.ek to node insert hoke break ke karan loop ruka hoga 
        //nhi to while loop ki condition false hui hogi i.e data same hoga,is case me insertion nhi hoga
        if(ptr->item==data)
            delete n; //insertion nhi hoga to new node ko delete kr denge
    }

}

//chatgpt explaination : https://chatgpt.com/share/6723447e-1a6c-800b-a119-c2586f3a2ee2

void BST :: preorder()  //The preorder() function calls preorderrec(root), for example root is the node with value 10
{
    preorderrec(root);    
}
void BST :: preorderrec(node *ptr) //kisi sub tree ke root node ka address mila
{
    if(ptr)
    {
        cout<<ptr->item<<" "; //visit root
        preorderrec(ptr->left);  //traverse left subtree
        preorderrec(ptr->right);  //traverse right subtree
    }
}

//chatgpt explaination : https://chatgpt.com/share/67235d83-ddf8-800b-ae47-81676a78c734
void BST :: inorder()
{
    inorderrec(root);
}
void BST :: inorderrec(node *ptr)
{
    if(ptr)
    {
        inorderrec(ptr->left);
        cout<<ptr->item<<" ";
        inorderrec(ptr->right);
    }
}

//chatgpt explaination : https://chatgpt.com/share/67235df4-a068-800b-a94f-b896e7d27110
void BST :: postorder()
{
    postorderrec(root);
}
void BST :: postorderrec(node *ptr)
{
    if(ptr)
    {
        postorderrec(ptr->left);
        postorderrec(ptr->right);
        cout<<ptr->item<<" ";
    }
}

node* BST :: search(int data)
{
    node *ptr=root;
    while(ptr!=nullptr)
    {
        if(ptr->item==data)
            return ptr;
        if(data < ptr->item)
            ptr=ptr->left;
        else
            ptr=ptr->right;
    }
    return ptr; //nullptr
}

void BST :: del(int data)
{
    root=deleteNode(root,data);
}

node* BST :: deleteNode(node *ptr,int data)
{
    if(ptr==nullptr)
        return nullptr;
    if(data < ptr->item)
        ptr->left=deleteNode(ptr->left,data);
    else if(data > ptr->item)
        ptr->right=deleteNode(ptr->right,data);
    else  //item is equal to data
    {
        //no child
        if(ptr->left==nullptr && ptr->right==nullptr)
        {
            delete ptr;
            return nullptr;
        }
        //single child
        if(ptr->left==nullptr || ptr->right==nullptr)
        {
            node *child=ptr->left?ptr->left:ptr->right;
            delete ptr;
            return child;   
        }
        //two children
        node *pred,*parpred;
        parpred=ptr;
        pred=ptr->left;
        while(pred->right!=nullptr)
        {
            parpred=pred;
            pred=pred->right;
        }
        ptr->item=pred->item;
        if(parpred->right==pred)
            parpred->right=deleteNode(pred,pred->item);
        else if(parpred->left==pred)
            parpred->left=deleteNode(pred,pred->item);
    }
    return ptr;
}

BST :: ~BST()
{
    while(root)
        del(root->item);
}
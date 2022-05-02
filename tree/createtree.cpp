#include<iostream>
using namespace std;
struct tree{
    int key;
    tree* left;
    tree* right;
    tree(int  k)
    {
        key=k;
        left=right=NULL;
    }
};
void *inorder(tree *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}
void *preorder(tree *root)
{
    if(root!=NULL)
    {
        cout<<(root->key)<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}
void *postorder(tree *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        inorder(root->right);
        cout<<(root->key)<<" ";
    }
}
int main(){
    tree* root=new tree(10);
    root->left=new tree(20);
    root->right=new tree(30);
    root->left->left=new tree(40);
    postorder(root);

return 0;
}
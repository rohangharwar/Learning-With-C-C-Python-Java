#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left,*right;
};
struct node *newnode(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return (temp);
}
void preorder(struct node *temp)
{
    if(temp==0)
    return;
    printf(" %d ",temp->data);
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(struct node *temp)
{
    if(temp==0)
    return;
    postorder(temp->left);
    postorder(temp->right);
    printf(" %d ",temp->data);
}
void inorder(struct node *temp)
{
    if(temp==0)
    return;
    inorder(temp->left);
    printf(" %d ",temp->data);
    inorder(temp->right);
}
int main()
{
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    
    printf("\n preorder \n");
    preorder(root);
    printf(" \npostorder \n");
    postorder(root);
    printf("\n inorder \n");
    inorder(root);
}


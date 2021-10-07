#include <stdio.h>
#include<stdlib.h>

struct node 
{
int data;
struct node* left;
struct node* right;
};

struct node* newNode(int data) 
{
struct node* node = (struct node*)
malloc(sizeof(struct node));
node->data  = data;
node->left  = NULL;
node->right = NULL;
  

return(node);
}

struct node* insert(struct node* node, int data) 
{

if (node == NULL) 
return(newNode(data));  

else
{
if (data <= node->data) 
node->left  = insert(node->left, data);

else
node->right = insert(node->right, data);

return node; 

}
}
void secondminUtil(struct node* node, int c) 
{ 
    if (node == NULL || c >= 2) 
        return; 

    secondminUtil(node->right, c); 

    c++; 
    if (c == 2) 
    { 
        printf("Minimum value in BST is %d \n",node->data); 
        return; 
    }
    secondminUtil(node->left, c); 
}
void secondmin(struct node* node) 
{
    int c = 0; 
    secondminUtil(node, c); 
}

int main()
{
struct node* root = NULL;
root = insert(root, 4);
insert(root, 2);
insert(root, 1);
insert(root, 3);
insert(root, 6);
insert(root, 5);  
secondmin(root);
getchar();

return 0;    
}

#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node * create_node(int data){
    struct node * ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Failed to create node");
        return NULL;
    }
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
void post_order(struct node * ptr){
     if(ptr!=NULL){
        post_order(ptr->left);
        post_order(ptr->right);
        printf("%d\t",ptr->data);
}
void pre_order(struct node * ptr){
    if(ptr!=NULL){
        printf("%d\t",ptr->data);
        pre_order(ptr->left);
        pre_order(ptr->right);
    }
}
void in_order(struct node * ptr){
     if(ptr!=NULL){
        in_order(ptr->left);
        printf("%d\t",ptr->data);
        in_order(ptr->right);
}
int main(){
    struct node * p=create_node(10);
    struct node * p1=create_node(23);
    struct node * p2=create_node(50);
    struct node * p3=create_node(67);
    struct node * p4=create_node(96);
    struct node * p5=create_node(38);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->right=p5;
    
    pre_order(p);
    return 0;
}
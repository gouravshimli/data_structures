#include<stdio.h>
#include<stdlib.h>
struct node
{
    /* data */
    int data;
    struct node * next;
};
void linked_list_traversal(struct node * ptr){
    while (ptr!=NULL)
    {
        /* code */
    
      printf(" %d\t",ptr->data);
      ptr=ptr->next;
    }  
}
struct node * insert_node(struct node * ptr,int data){
    struct node * head =(struct node *)malloc(sizeof(struct node));
    head->data=data;
    head->next=ptr;
    return head;
}
struct node * insert_end(struct node * head,int data){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    
    struct node * p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    forth=(struct node *)malloc(sizeof(struct node));
    head->data=10;
    head->next=second;

    second->data=15;
    second->next=third;
    
    forth->data=35;
    forth->next=NULL;

    third->data=20;
    third->next=forth;
    
    //struct node* newnode =insert_node(head,8);
    // linked_list_traversal(newnode);
    insert_end(head,50);
    linked_list_traversal(head);
    return 0;

}
#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node * next;
};
void traverse(struct node * ptr){
    do{
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }while(ptr!=NULL);
}
struct node * delete_first(struct node * ptr){
    struct node * head;
    head= ptr->next;
    free(ptr);
    return head;
}
struct node * delete_last(struct node * ptr){
    struct node * p;
    struct node * q;
    struct node * head;
    p=ptr;
    q=ptr->next;
    while(q->next!=NULL){
       p= p->next;
       q= q->next;
    }
    p->next=NULL;
    free(q);
    head=ptr;
     return head;
}
int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;struct node * fifth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));
    
    head->data=12;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=18;
    third->next=fourth;

    fourth->data=25;
    fourth->next=fifth;

    fifth->data=22;
    fifth->next=NULL;
    
    //head=delete_first(head);
    head=delete_last(head);

    traverse(head);

    return 0;
}
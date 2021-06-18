#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};
void display(struct node * ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
void is_full(){
    printf("stack overflow!!");
}
struct node * pop(struct node * ptr){
    if(ptr==NULL){
        printf("Stack empty!!");
        return ptr;
    }
    struct node * top;
    top=ptr->next;
    free(ptr);
    return top;
}
struct node * push(struct node * ptr,int data){
    struct node * head=(struct node *)malloc(sizeof(struct node));
    if(head==NULL){
        is_full();
    }
    head->data=data;
    head->next=ptr;
    ptr=head;
    return ptr;
}
int main(){
    struct node * top=NULL;
    top=push(top,5);
    top=push(top,315);
    top=push(top,185);
    top=push(top,175);
    top=push(top,156);
    top=push(top,105);
    top=push(top,915);
    top=pop(top);
    top=pop(top);
    display(top);
    return 0;
}
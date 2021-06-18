#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX];int front=-1;int rear=-1;
void enqueue(int data){
    if(front==-1)
       front++;
    if(rear==MAX-1){
        printf("Queue is full!!");
        return;
    }
    printf("hi");
    rear=rear+1;
    a[rear]=data;
    
}
void display(){
    if(front==-1 && front>rear){
        printf("Queue is empty!!");
    }
    for(int i=front;i<=rear;i++){
        printf("%d\t",a[i]);
    }
}
void dequeue(){
    if(front==-1 && front>rear){
        printf("Queue is empty!!");
    }
    front++;
    
}
int main(){
    enqueue(10);
    enqueue(12);
    enqueue(20);
    enqueue(36);
    enqueue(56);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    enqueue(35);
    enqueue(39);
    printf("after dequeue");
    display();
    return 0;
}
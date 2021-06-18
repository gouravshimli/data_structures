#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int top=-1;
int a[MAX_SIZE];
void push(int data){
    if(top==MAX_SIZE-1){
        printf("stack overflow!!");
        return;
    }
    top=top+1;
    a[top]=data;
    
}
void display(int a[]){
    if(top==-1){
        printf("stack is empty!!\n");
        return;
    }
    for(int i=0;i<=top;i++){
        printf("%d\n",a[i]);
    }
}
void pop(int a[]){
    if(top==-1){
        printf("Stack is underflow!! can't delete more items\n");
        return;
    }
    top=top-1;
}
void is_empty(int a[]){
    if(top==-1){
        printf("stack is empty!!\n");
        return;
    }
    printf("Stack is not empty!!");
}
int main(){
    push(3);
    push(6);
    push(8);
    push(26);
    push(58);
    pop(a);
    pop(a);
    pop(a);
    pop(a);
    pop(a);
    pop(a);
    is_empty(a);
    display(a);

    return 0;
}
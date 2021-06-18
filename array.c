#include<stdio.h>
void display(int a[],int size){
             for(int i=0;i<size;i++){
                printf("%d",a[i]);
                printf("\t");
    }
    printf("\n");
}
void sort_array(int a[],int size){
    
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array\n");
    display(a,size);
}
int insert_sorted_array(int a[],int element,int size){
         if(size<50){
            return -1;
         }
         for(int i=0;i<size;i++){
             if(element>=a[i]&& element<=a[i+1]){
                 for(int j=size-1;j>i;j--){
                    a[i]=a[i+1];
                 }
                 a[i+1]=element;
                 return 1;
             }
         }
         
} 
int insert_array(int a[],int element,int size,int index){
    if(size>50){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        a[i+1]=a[i];
    }
    a[index]=element;
    return 1;
}
int main(){
    int a[50]={3,5,2,12,23,5,56,75,63};
    int element=12;int index=6;
    int size=9; int insert_arr;
    int length=sizeof(a)/sizeof(int);
    printf("Length of  array %d\n",length);
    printf("Array Traverse\n");
    display(a,size);
    
    //insert_sorted_array(a,element,size);
    //size++;
    //display(a,size);
    insert_arr=insert_array(a,element,size,index);
    if(insert_arr==1){
        size++;
         printf("insert successfully\t");
         printf("Display Updated array\n");
         display(a,size);
    }
    sort_array(a,size);
    return 0;
}

#include<stdio.h>
int linear_search(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(element==arr[i]){
            return i;
        }
    }
    return -1;
}
int binary_search(int arr[],int element,int size){
    int low=0;int high=size;int mid;
    while(low<=high){
        mid=(low+high)/2;
    
        if(element==arr[mid]){
            return mid;
        }
        if(element<arr[mid]){
            high=mid-1;
        }
        if(element>arr[mid])
        {
            low=mid;
        }
    
    }
    return -1;
}
int main(){
    int arr[]={2,3,5,7,8,13,15,16,18,20,26,37,68,79};
    int size=sizeof(arr)/sizeof(int);
    int element=8;int search_index;
    //search_index=linear_search(arr,size,element);
    //printf("The element found at index %d\n",search_index);
    search_index=binary_search(arr,element,size);
    printf("The element found at index %d\n",search_index);

    return 0;
}
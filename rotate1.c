#include<stdio.h>
int main(){
    int size,i,temp;
    printf("Enter the value of size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original Array");
        for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    temp=arr[size-1];
    for(int i=size-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    printf("Rotated array is:");
    for(int i=0;i<size;i++){
       printf("%d ",arr[i]);
    }
    return 0;
}
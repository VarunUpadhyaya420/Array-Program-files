#include<stdio.h>
int main(){
    int size,i,count;count=0;
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
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    if(arr[size-1]>arr[0]){
        count++;
    }
    if(count<=1){
        printf("\nTrue:The array is sorted and rotated.");
    }else{
        printf("\nFalse:The array is not sorted and rotated.");
    }
    return 0;
}
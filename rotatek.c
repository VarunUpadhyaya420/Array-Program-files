#include<stdio.h>
int main(){
    int size,i,k,j;
    int temp;
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
    printf("\nEnter how many times array is rotated:");
    scanf("%d",&k);
     k=k%size;
    for(i=0,j=size-1; i<j; i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
        for(i=0,j=k-1; i<j; i++,j--){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        for(i=k,j=size-1; i<j; i++,j--){
             temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        printf("\nRotated array is:");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
        return 0;
    }
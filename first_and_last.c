#include<stdio.h>
int main(){
    int size,i,low,high,mid;
    int target;
    int first_occurence=-1;
    int last_occurence=-1;
    printf("Enter the value of size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of Sorted array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nOriginal Array");
        for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter the element to be search:");
    scanf("%d",&target);
    //for first occurence
    low=0;
    high=size-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==target){
            first_occurence=mid;
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    //for last occurence
    low=0;
    high=size-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==target){
            last_occurence=mid;
            low=mid+1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(first_occurence!=0){
         printf("The first occurence of %d is at index %d",target,first_occurence);
         printf("\nThe last occurence of %d is at index %d",target,last_occurence);
    }
    else{
          printf("%d is not exist",target);
    }
    return 0;
}
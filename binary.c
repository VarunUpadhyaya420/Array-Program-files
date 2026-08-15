#include<stdio.h>
int main(){
    int size,i,low,high,mid;
    int found,target;
    printf("Enter the value of size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements of array are:");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter the value of target");
    scanf("%d",&target);
    low=0;
    high=size-1;
    found=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==target){
          found=mid;
          break;
        }
        if(arr[mid]>target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
if(found!=0){
    printf("Element found at index %d",found);
}else{
    printf("Element not found in the array");
}
return 0;
}
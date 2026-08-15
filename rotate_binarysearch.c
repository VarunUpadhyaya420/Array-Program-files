#include<stdio.h>
int main(){
    int arr[]={4,5,6,7,0,1,2};
    int size=7;
    int target=2;
    int low,high,mid;
    low=0;
    high=size-1;
    while(low<=high){
         mid=low+(high-low)/2;
        if(arr[mid]==target){
           printf("Target found at index %d\n",mid);
           break;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid]){
                    high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<=target && target<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    if(arr[mid]!=target){
            printf("Target is not found");}
    return 0;
}
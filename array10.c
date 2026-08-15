#include<stdio.h>
int main(){
    int arr[]={2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    int isSorted=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            isSorted=0;
            break;
        }
    }
    if(isSorted){
        printf("The array is sorted.\n");
    }
    else{
        printf("The array is not sorted.\n");
    }
    return 0;
}
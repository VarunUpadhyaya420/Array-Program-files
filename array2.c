#include<stdio.h>
int main(){
    int arr[]={2,3,4,6,7,5};
    int length;
    int large=0;
    length=sizeof(arr)/sizeof(int);
    for(int i=0;i<6;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    printf("The largest element in the given array is %d",large);
    return 0;
}
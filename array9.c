#include<stdio.h>
int main(){
    int arr[]={2,5,8,6,9,7,12,13};
    int size=sizeof(arr)/sizeof(int);
    int largest,second_largest;
    if(arr[0]>arr[1]){
        largest=arr[0];
        second_largest=arr[1];
    }
    else{
        largest=arr[1];
        second_largest=arr[0];
    }
    for(int i=2;i<size;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    printf("The second largest of array is %d",second_largest);
return 0;
}
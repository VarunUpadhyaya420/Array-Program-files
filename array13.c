#include<stdio.h>
int main(){
    int size,i,temp;
    printf("Enter the size of element");
    scanf("%d",&size);
    int arr[size];
     printf("Enter Elements of array are:");
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    printf("Original array:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<size;i+=2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("Resultant array");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
return 0;
}

#include<stdio.h>
int main(){
    int size,i;
    printf("Enter the size of array");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements of array are:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
return 0;
}
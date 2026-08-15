#include<stdio.h>
int main(){
    int size,i,Sum=0;
    printf("Enter the size of array");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        Sum+=arr[i];
    }
    printf("Sum of the elements of array is %d-",Sum);
    return 0;
}
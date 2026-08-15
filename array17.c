#include<stdio.h>
int main(){
    int size,i,j,count,z;count=0;
    printf("Enter the value of size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array");
    for(i=0;i<size;i++){
         scanf("%d",&arr[i]);
    }
    printf("\nElements of array are:");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
    }
    printf("\nNumber of duplicate element in an array is %d",count);
    return 0;
}
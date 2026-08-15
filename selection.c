#include<stdio.h>
int main(){
    int size,i,j,smallest_index;
    int temp;
    printf("Enter the value of size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elments of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original Array is:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<size-1;i++){
        smallest_index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[smallest_index]){
            smallest_index=j;
            }  
    }

    temp=arr[i];
    arr[i]=arr[smallest_index];
    arr[smallest_index]=temp;
}
    printf("\nSorted Array is:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

return 0;
}
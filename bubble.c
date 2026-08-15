#include<stdio.h>
int main(){
    int size,i,temp,j;
    printf("Enter the value of size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original Array");
        for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("\nSorted array is:");
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
return 0;
}

    
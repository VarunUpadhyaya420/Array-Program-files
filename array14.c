#include<stdio.h>
int main(){
    int size,i;
    printf("Enter the size of array");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nHalf array is:");
     if(size % 2==0){
        for(int i=0;(i<(size/2));i++){
            printf("%d ",arr[i]);
        }

    }
        else{
            for(int i=0;(i<(size/2)+1);i++){
                printf("%d ",arr[i]);
            }
         }

    return 0;
}
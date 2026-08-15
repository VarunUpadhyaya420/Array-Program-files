#include<stdio.h>
int main(){
    int size,i,pos;
    printf("Enter the size of array");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of element which you want to delete");
    scanf("%d",&pos);
    for(int i=pos-1;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("The Elements of the new array are:");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
return 0;
}
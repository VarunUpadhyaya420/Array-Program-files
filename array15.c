#include<stdio.h>
int main(){
    int size,i,avg,Sum;Sum=0;
    float z;
    printf("Enter the value of size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements of array are:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
        Sum+=arr[i];
    }
    z=(float)Sum/size;
    printf("\nAverage of elements of array is %.1f",z);
    printf("\nElements which is greater than average is:");
    for(int i=0;i<size;i++){
        if(arr[i]>z){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
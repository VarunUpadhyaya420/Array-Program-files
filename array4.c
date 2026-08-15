#include<stdio.h>
int main(){
    int arr[5],i;
    printf("Enter elements in array");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("Elements in array are : ");
    for(int i=0; i<5 ;i++){
        printf("%d ",arr[i]);
    }
return 0;    
}
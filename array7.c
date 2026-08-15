#include<stdio.h>
int main(){
    int size,i,value,pos;
    printf("Enter the size of array");
    scanf("%d",&size);
    int arr[size+1];
    printf("Enter the elements of array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to be inserted");
    scanf("%d",&value);
    printf("Enter the position at which inserted");
    scanf("%d",&pos);
    for(int i=size-1;i>=pos-1;i--){
         arr[i+1]=arr[i];
    }
arr[pos-1]=value;
printf("Inserted array");
for(int i=0;i<=size;i++){
    printf("%d ",arr[i]);
}

return 0;
}
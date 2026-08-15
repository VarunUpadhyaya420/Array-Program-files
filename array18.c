#include<stdio.h>
int main(){
    int size,i;
    printf("Enter the value of size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements of array are:");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    int total_element=size+1;
    int expected_sum=(total_element*(total_element+1))/2;
    int actual_sum=0;
    for(i=0;i<size;i++){
        actual_sum+=arr[i];
    }
    int missing_num=expected_sum-actual_sum;
    printf("The missing number in the given array is %d",missing_num);
    return 0;
}
    
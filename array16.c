#include<stdio.h>
int main(){
    int arr[]={2,1,6,8,3,7,5};
    int length=sizeof(arr)/sizeof(int);
    int total_element=length+1;
    int expected_sum=(total_element*(total_element+1))/2;
    int actual_sum=0;
    for(int i=0;i<length;i++){
        actual_sum+=arr[i];
    }
    int missing_number=expected_sum-actual_sum;
    printf("The missing number is %d",missing_number);
    return 0;
}


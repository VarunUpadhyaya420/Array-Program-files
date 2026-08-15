#include<stdio.h>
int main(){
    int arr[]={2,3,4,6,7,5};
    int length,sumeven,productodd;sumeven=0;productodd=1;
     length=sizeof(arr)/sizeof(int);
    for(int i=0;i<6;i++){
        if(i%2==0){
            sumeven=sumeven+arr[i];
        }
        else{
            productodd=productodd*arr[i];
        }
    }
    printf("The sum of terms present on even index is %d\n",sumeven);
    printf("The product of terms present on odd index is %d",productodd);
return 0;
}

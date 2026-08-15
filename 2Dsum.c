#include<stdio.h>
int main(){
    int i,j,m,n;
    int count;count=0;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of column:");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the elements of array");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            count+=arr[i][j];
        }
    }
    printf("Sum of elements of matrix is %d",count);
    return 0;

}
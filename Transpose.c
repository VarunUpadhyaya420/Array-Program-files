#include<stdio.h>
int main(){
    int i,j,m,n;
    printf("Enter the number of rows");
    scanf("%d",&m);
    printf("Enter the number of columns");
    scanf("%d",&n);
    int arr[m][n];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose of given array is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
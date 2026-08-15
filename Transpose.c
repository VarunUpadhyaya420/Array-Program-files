#include<stdio.h>
int main(){
    int i,j,m,n,temp;
    printf("Enter the number of rows");
    scanf("%d",&m);
    printf("Enter the number of column");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
    
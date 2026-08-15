#include<stdio.h>
int main(){
    int i,j,n,temp;
    printf("Enter the matrix size");
    scanf("%d",&n);
    int arr[n][n];
    int transpose[n][n];
    for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            transpose[i][j]=arr[j][i];
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        int left=0;
        int right=n-1;
     while(left<right){
        temp=transpose[i][left];
        transpose[i][left]=transpose[i][right];
        transpose[i][right]=temp;
        left++;
        right--;
    }
}
    printf("Rotated array is:\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
}
return 0;
}
    
#include<stdio.h>
int main(){
    int i,j,m,n;
    int target;
    int found=0;
    printf("Enter the number of rows");
    scanf("%d",&m);
    printf("Enter the number of column");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the value of target");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                found=1;
            }
        }
    }
    if(found!=0){
        printf("Target is found");
    }
            else
            {
                printf("Target not found");
            }
    return 0;
}
    
    
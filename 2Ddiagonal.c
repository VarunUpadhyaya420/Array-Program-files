#include<stdio.h>
int main(){
    int i,j,m,n;
    printf("Enter the number of rows");
    scanf("%d",&m);
    printf("Enter the number of column");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the elements of given matrix %d*%d",m,n);
    for(int i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
}
                if (m!=n) {
                    printf("\nError: Diagonal operations require a square matrix.\n");
                } else {
                    int mainDiagSum = 0, antiDiagSum = 0;
                    for (int i = 0; i < m; i++) {
                        mainDiagSum += arr[i][i];
                        antiDiagSum += arr[i][m- 1 - i];
                    }
                    
                    if (mainDiagSum >= antiDiagSum) {
                        printf("\nMain Diagonal has the maximum sum (%d): ", mainDiagSum);
                        for (int i = 0; i < m; i++) printf("%d ", arr[i][i]);
                    } else {
                        printf("\nAnti-Diagonal has the maximum sum (%d): ", antiDiagSum);
                        for (int i = 0; i < m; i++) printf("%d ", arr[i][m - 1 - i]);
                    }
                  printf("\n");
                }
                return 0;
            }

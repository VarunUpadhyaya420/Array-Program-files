#include<stdio.h>
int main(){
    int source[]={4,2,7,4,8,2,4,9,7};
    int size=sizeof(source)/sizeof(int);
    int duplicates[size];
    int dup_count=0;
    printf("Original Array: ");
    for(int i=0;i<size;i++){
        printf("%d ",source[i]);
    }
    printf("\n\n");
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(source[i]==source[j]){
                int already_added=0;
            
                for(int k=0;k<dup_count;k++){
                    if(source[i]==duplicates[k]){
                        already_added=1;
                        break;
                    }
                }
            if(!already_added){
                duplicates[dup_count]=source[i];
                dup_count++;
            }
            break;
        }
        }
    }
    if(dup_count>0){
        printf("Duplicate elements printed:");
        for(int i=0;i<dup_count;i++){
            printf("%d",duplicates[i]);
        }
        printf("\n");

         printf("Elements successfully copied to the new array:");
        for(int i=0;i<dup_count;i++){
            printf("%d",duplicates[i]);
        }
        printf("\n");
    }
    else{
        printf("No duplicate elements found in the array.\n");
    }
    return 0;
}
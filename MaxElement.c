#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the num of rows : ");
    scanf("%d",&r);
    printf("Enter the num of columns :");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\n");
    int max = arr[0][0];
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if(max<arr[i][j]) {max = arr[i][j];        
        }
    }
    }
    printf("The Maximum Element in the array is : %d",max);
}
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the num of ROWS :");
    scanf("%d",&r);
    printf("Enter the num of COLUMNS :");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the %dth element : ",j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\n\n");
    int brr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the %dth element : ",j);
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\n\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int c = arr[i][j]+brr[i][j];
            printf("%d ",c);
        }
        printf("\n");
    }
    
}
#include<stdio.h>
int main(){
    int r,c;
    printf("ENter the num of rows : ");
    scanf("%d",&r);
    printf("Enter the num of columns :");
    scanf("%d",&c);
    int arr[r][c]; // total elments = r*c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\n");
    int sum = 0;
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum += arr[i][j];
        }
    }
    printf("%d ",sum);
}
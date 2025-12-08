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
int l1,r1,l2,r2;
printf("Enter the coordinates accordingly : ");
scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
int sum = 0;
    for(int i=l1;i<l2;i++){
        for(int j=r1;j<r2;j++){
            sum += arr[i][j];
        }
    }
    printf("The sum of the rectangle by the given coodinates is %d",sum);
    return 0;
}
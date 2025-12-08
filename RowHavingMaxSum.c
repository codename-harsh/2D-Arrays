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
int i,j;
int max= 0;
for(i=0;i<r;i++){
    int sum = 0;
    for(j=0;j<c;j++){
        sum += arr[i][j];
        }
        if(sum>max){
        max = sum;}
    }
printf("Maximum Row sum is %d and the row number is %d,%d",max,i,j);
}

    

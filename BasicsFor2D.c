#include<stdio.h>
// int main(){
//     int a[2][3] = {{1,3,6},{43,5,33}}; //iss tarah manually input lete 2d array me ... basicall it is same as matrix ;)//
//     printf("%d ",a[1][2]);
//     return 0;
// }
int main(){
    int r,c;
    printf("ENter the num of rows : ");
    scanf("%d",&r);
    printf("Enter the num of columns :");
    scanf("%d",&c);
    int arr[r][c]; // total elments = r*c;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\n\n\n");
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
    }
}
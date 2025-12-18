#include<stdio.h>
int main(){
    int m;
    printf("Enter the row : \n");
scanf("%d",&m);
int n;
printf("Enter the column : \n");
scanf("%d",&n);
int arr[m][n];
printf("Enter the elements accordingly :)\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("\n The new ordered matrix is :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j%2==0){
                printf("%d ",arr[m-i-1][j]);
            }
            else printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}


// 1 2 3         7 2 9
// 4 5 6    ->   4 5 6
// 7 8 9         1 8 3
//isme nXn ka matrix hai yanni rows and columns same hai so order r and c ki wajaye simply ek lo that is  n //
#include<stdio.h>
int main(){
    int n;
    printf("Enter the num of rows/columns : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //swap arr[i][j] with arr[j][i]//
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;

        }
        printf("\n");
    }printf("The inverse of the matrix is : \n");
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

    

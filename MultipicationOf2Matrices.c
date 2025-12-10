//Very very important question //

#include<stdio.h>
int main(){
    int a,b,p,q;
    printf("Enter the rows and  columns respectively :  ");
    scanf("%d %d %d %d ",&a,&b,&p,&q);
    if(b!=p) printf("Invalid Action !");
    int arr[a][b],brr[p][q];
    printf("Enter the Elements : ");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Now for 2nd matrix elements : ");
        for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int res[a][q];
    int cr= b;
    for(int i=0;i<a;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<cr;k++){
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
      for(int i=0;i<a;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }  
}
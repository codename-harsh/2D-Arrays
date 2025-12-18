#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the rows and columns \n ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the Elements accordingly : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    //spiral printing shit starts //
    printf("\n");
    int minr=0, maxr=m-1, minc=0, maxc=n-1, count=0, tne=m*n;
    //print min row//
    while(count<tne){
    for(int i=minc;i<=maxc;i++){
            printf("%d ",a[minr][i]);
            count++;
        }
minr++;
if(count>=tne) break;
//print max column //
for(int j=minr;j<=maxr;j++){
            printf("%d ",a[j][maxc]);
            count++;
        }
maxc--;
if(count>=tne) break;
// print max row//
for(int j=maxc;j>=minc;j--){
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
if(count>=tne) break;
        //print min column//
        for(int i=maxr;i>=minr;i--){
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
if(count>=tne) break;
    }
}
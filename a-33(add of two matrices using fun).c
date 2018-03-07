#include <stdio.h>
#define row 50
#define col 50
void AddMatrix(int c[row][col],int d[row][col],int rowe,int cole);
int main()
{
    int a[row][col]={0},b[row][col]={0},res[row][col]={0};
    int r1=0,c1=0,r2=0,c2=0,m=0,n=0;
    printf("\nenter no .of rows and colums of A matrix");
    scanf("%d%d",&r1,&c1);
    printf("\nenter no .of rows and colums of B matrix");
    scanf("%d%d",&r2,&c2);
    if((r1==r2)&&(c1==c2)){
        m=r1=r2;
        n=c1=c2;
        printf("\nenter A matrix");
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nenter B matrix");
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                scanf("%d",&b[i][j]);
            }
        }
        
    }
    else{
        printf("\n enter correct row and column values");
    }
   
    AddMatrix(a,b,m,n);
    printf("\n The task has completed ");
    return 0;
}
void AddMatrix(int c[row][col],int d[row][col],int rowe,int cole){
    int r1[row][col]={0};
    for(int g=0;g<rowe;g++){
        for(int h=0;h<cole;h++){
            r1[g][h]=c[g][h]+d[g][h];
        }
    }
    printf("\n the added matrix is :\n");
    for(int g=0;g<rowe;g++){
        for(int h=0;h<cole;h++){
            printf("%d\t",r1[g][h]);
        }
        printf("\n");
    }
    
}

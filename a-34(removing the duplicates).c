#include <stdio.h>
#define max 50


int main()
{
    //printf("Hello World!\n");
    int a[max] = {0},i=0,j=0,n=0,res[max]={0};
    printf("\n enter no.of elements");
    scanf("%d",&n);
    printf("\n enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(int k=0;k<n;k++){
                    a[k]=a[k+1];
                    
                }
                n--;
            }
            else {
                j++;
                
            }
        }
    }
    printf("duplicate elements");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    
    
    
    
    return 0;
}

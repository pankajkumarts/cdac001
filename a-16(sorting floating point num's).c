#include<stdio.h>
#define MAX 100
void main()
{
int i=0,n=0,j=0,k=0;
float temp=0.0f;

float a[MAX] = {0};
printf("\nenter no.of values");
scanf("%d",&k);
printf("\nenter values");
for(i=0;i<k;i++){
    scanf("%f",&a[i]);
}
printf("\n\nElement Before Sorting \n\n");
for(i= 0; i<k; i++) 
{
    printf("%.2f  ", a[i]);
}
printf("\nElement After Sorting \n");
for(i=0;i<k;i++)
{
    for(j=0;j<k-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j+1];//swaping element 
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
}
//printing output of program
for(i= 0; i< k; i++) 
{
    printf("%.2f  ", a[i]);
}

}

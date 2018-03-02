#include<stdio.h>
void main(){
int a=0,b=0,c=0,ret=0;
int gcd=0,small=0;

do{
printf("enter 1st number\n");
fflush(stdin);
ret=scanf("%d",&a);
}while(ret==0);

do{
printf("enter 2nd number\n");
fflush(stdin);
ret=scanf("%d",&a);
}while(ret==0);

do{
printf("enter 3rd number\n");
fflush(stdin);
ret=scanf("%d",&a);
}while(ret==0);

small=(a<b)?a:b;
gcd=(small<c)?small:c;

while(1)
{
 if((a%gcd==0)&&(b%gcd==0)&&(c%gcd==0))
{
 printf("gcd is: %d \n",gcd);
 break;
}
else gcd--;
}
}

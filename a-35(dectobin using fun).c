#include <stdio.h>
int binary(int);
int main() {
	//code
	int a=0,res=0;
	scanf("%d",&a);
	res=binary(a);
	return 0;
}
int binary(int x){
    int a[100]={0},i=0;
    while(x>0){
        a[i]=x%2;
        x=x/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
}

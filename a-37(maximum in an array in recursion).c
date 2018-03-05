#include <stdio.h>
int maxrec(int array[] ,int y);
int main() {
	//code
	int a[100]={0},n=0,res=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) 
	{
	    scanf("%d",&a[i]);
	}
	res=maxrec(a,n);
	printf("%d",res);
	return 0;
}
int maxrec(int array[],int y){
    int result=array[0];
    if(y){
        result=(array,--y);
        return ((array[y]>result)?array[y]:result);
    }
    return result; 
}

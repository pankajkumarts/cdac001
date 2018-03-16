#include <stdio.h>

void DisplayBinary(int n);
int main() {
	//code
	int a=0;
	printf("\n enter a number");
	scanf("%d",&a);
	printf("\n binary eq:");
	DisplayBinary(a);
	return 0;
}
void DisplayBinary(int n){
    int r=0;
    if(n){
        r=n%2;
        DisplayBinary(n/2);
        printf("%d",r);
    }
}

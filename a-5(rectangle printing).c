#include <stdio.h>

int main() {
	int h=0,w=0,area=0,perimeter=0,i=0,j=0;
	printf("enter height\n");
	scanf("%d",&h);
	printf("enter width\n");
	scanf("%d",&w);
	area=h*w;
	printf("\narea : %d",area);
	perimeter=2*(h+w);
	printf("\nperimeter : %d",perimeter);
	for(i=1;i<=h;i++){
	    for(j=1;j<=w;j++){
	        if(i==1 || i== h || j==1 || j==w){
	            printf("*");
	        }
	        else printf(" ");
	    }
	    printf("\n");
	}
	return 0;
}

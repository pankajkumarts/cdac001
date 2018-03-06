#include <stdio.h>
#define max 50
int main() {
	//code
	char c[max]={0};
	int i=0,flag=1;
	scanf("%[^\n]",c);
	printf("entered mail id is: %s",c);
	printf("\n mail is :");
	while(c[i]!='@'){
	    printf("%c",c[i]);
	    i++;
	}
	printf("\n domain is :");
	i++;
	while(c[i]!='\0'){
	    printf("%c",c[i]);
	    i++;
	    flag=0;
	}
	if(flag==1){
	    printf(" \n please enter valid email id");
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
#define M 30

int main() {
	//code
	char s[M],p[M];
	int c=0,i=0;
	int len;
   scanf("%s",s);
   printf("%s",s);
   while(s[i]!='\0'){
       c++;
       i++;
   }
   printf("\n%d",c);
	return 0;
}

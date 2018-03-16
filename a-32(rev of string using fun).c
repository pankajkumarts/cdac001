#include <stdio.h>
#define max 50
#include<string.h>

void RevStr(char s1[max]);
int main() {
	//code
	char s[max]={0};
	printf("\n enter a sting");
	scanf("%s",s);
	RevStr(s);
	
	
	return 0;
}
void RevStr(char s1[max]){
    int len;
    char p[max];
    len = strlen(s1);
    for(int i=0;i<=len;i++){
       for(int j=len-1;j>=0;j--){
            if(i+j==len-1){
                p[i]=s1[j];
                
            }
       }
    }
    printf("\n%s",p);
}

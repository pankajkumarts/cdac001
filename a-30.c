#include <stdio.h>

int main() {
	//code
	int n=0,base=0;
	int a[100]={0},i=0,r=0,j=0;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("\n enter the base to convert");
	scanf("%d",&base);

	    switch(base){
	        case 2:
	             while(n>0){
                    a[i]=n%2;
                    n=n/2;
                    i++;
                    }
                 for(int j=i-1;j>=0;j--){
                    printf("%d",a[j]);
                    }
                break;
            case 8:
                while(n!=0){
                    a[i]=n%8;
                    n=n/8;
                    i++;
                }
                for(int j=i-1;j>=0;j--){
                    printf("%d",a[j]);
                }
                break;
            case 10:
                printf("\nnumber in base 10 is : %d",n);
                break;
            case 16:
            while(n!=0){
                    r=n%16;
                            if (r < 10)
                                a[j++] = 48 + r;
                            else
                                a[j++] = 55 + r;
                    n=n/16;
                    i++;
                }
                    for (i = j; i >= 0; i--){
                        printf("%c", a[i]);
                    }
                    break;
            default:
                printf("\n enter a valid number");
                break;
                
	    }
	
	return 0;
}

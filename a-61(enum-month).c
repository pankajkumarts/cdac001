#include <stdio.h>
#include<stdlib.h>
enum month{
    JAN=1,FEB=2,MAR=3,APR=4,MAY=5,JUN=6,JUL=7,AUG=8,SEP=9,OCT=10,NOV=11,DEC=12
};

int main() {
	//code
	int n=0;
	
	printf("\n enter the value");
	scanf("%d",&n);
	enum month m1 = (enum month) n;
	printf("\nmonth for entered value is : %d",m1);
	switch(m1){
	    case 1:
	        printf("\nJANUARY");
	        break;
	    case 2:
	        printf("\nFEBRAUARY");
	        break;
	     case 3:
	        printf("\nMARCH");
	        break;
	    case 4:
	        printf("\nAPRIL");
	        break;
	    case 5:
	        printf("\nMAY");
	        break;
	    case 6:
	        printf("\nJUNE");
	        break;
	    case 7:
	        printf("\nJULY");
	        break;
	    case 8:
	        printf("\nAUGUST");
	        break;
	    case 9:
	        printf("\nSEPTEMBER");
	        break;
	    case 10:
	        printf("\nOCTOBER");
	        break;
	    case 11:
	        printf("\nNOVEMBER");
	        break;
	    case 12:
	        printf("\nDECEMBER");
	        break;
      default:
	        printf("\n Invalid value ");
	        break;
	}
	
	return 0;
}

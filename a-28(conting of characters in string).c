#include <stdio.h>
 
int main()
{
    char str[100];
    int digits=0,alphabet=0,specialchar=0,count=0;
    int counter;
 
    //assign all counters to zero
    
 
    printf("Enter a string: ");
    gets(str);
 
    for(count=0;str[count]!=NULL;count++)
    {
 
        if(str[count]>='0' && str[count]<='9')
            digits++;
        else if((str[count]>='A' && str[count]<='Z')||(str[count]>='a' && str[count]<='z'))
            alphabet++;
        
        else
            specialchar++;
    }
 
    printf("\nDigits in input are: %d \n alphabets in input are: %d  \n Special Characters in input are: %d",digits,alphabet,specialchar);
 
    return 0;
}

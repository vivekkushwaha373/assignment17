#include<stdio.h>
int main()
{  
    char str[20];
    char cha;
    int count=0;
    printf("enter the string: ");
    gets(str);
    
   
    printf("enter the character: ");
    scanf("%c",&cha);
    for(int i=0;str[i];i++)
    {
        if(str[i]==cha)
        {
          count++;
        }
    }
    printf("the number of occurence of character %c is %d",cha,count);
    
   
    return 0;
}
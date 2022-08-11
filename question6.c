#include<stdio.h>
int countlength(char []);
int countlength(char str[])
{
   int count;
   for(count=0;str[count]!='\0';count++);
   
    return count; 
}
int main()
{ 
   char str[20];
   printf("enter the string: ");
   gets(str);
   int x;
   x=countlength(str)-1;
   for(int s=x;s>=0;s--)
   {
    printf("%c",str[s]);
   }

    return 0;
}
#include<stdio.h>
int main()
{
   char str[20],i=0,j=0,temp;
   printf("enter a string: ");
   gets(str);
   for(i=0;str[i]!='\0';i++)
   {
    for(j=i+1;str[j]!='\0';j++)
    if(str[i]>str[j])
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
   }
   printf("string has been sorted: ");
   printf("%s",str);
    return 0;
}
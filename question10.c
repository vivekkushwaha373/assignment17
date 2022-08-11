#include<stdio.h>
int frequency(char c,char str[])
{
    int count=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
        count++;
    }
    return count;
}
int main()
{
   char str[20];int i,count;
   printf("enter a character: ");
   gets(str);
   for(i=0;str[i]!='\0';i++)
   {count=0;
    for(int j=0;j<i;j++)
    {   
        if(str[i]==str[j])
        count++;
    }
    if(count>0)
    continue;
    else
    printf("the frequency of character %c is %d\n",str[i],frequency(str[i],str));
   }

    return 0;
}
#include<stdio.h>
int main()
{   
    int alphabet=0,digit=0,special=0,i=0;
   char str[20];
    printf("enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 &&str[i]<=95 ||str[i]>=97 &&str[i]<=122)
        {
            alphabet++;
        }
        if(str[i]>=48 &&str[i]<=57)
        {
            digit++;
        }
        if(str[i]>=32&&str[i]<=47||str[i]>=58&&str[i]<=64||str[i]>=91&&str[i]<=96||str[i]>=123 &&str[i]<=126)
        {
            special++;
        }
    }
    printf("the number of alphabet digit and special charaters are %d, %d,and %d",alphabet,digit,special);
    return 0;
}

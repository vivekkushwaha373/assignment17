#include<stdio.h>
void stringcopy(char [],char []);
void stringcopy(char s[],char t[])
{
    int i=0;
    for(i=0;t[i]!=0;i++)
    {
        s[i]=t[i];
    }
    s[i]='\0';
    
}
int main()
{
    char str[20];
    char cstr[20];
    printf("enter first string: ");
    gets(str);
    printf("enter second string: ");
    gets(cstr);
    stringcopy(cstr,str);
    printf("first string is successfully copied into second string: \n");
    printf("the first string is: %s\n",str);
    printf("the second string is: %s",cstr);
   
    return 0;
}
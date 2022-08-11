#include<stdio.h>
int main()
{ 
    char s[20];
    int count=0;
    printf("enter a string: ");
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] =='o' || s[i]=='O' || s[i] == 'u' || s[i] == 'U')
        {count++;}
        printf("%d\n",i);
    }
    printf("number of vowels are: %d",count);
    return 0;
}
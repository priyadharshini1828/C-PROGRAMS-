#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],length,temp,i,count=0;
    gets(str);
    while(str!='\0')
    {
        if(str!=" ")
        {
            count++;
        }
        else
        {
            count=0;
        }
        length++;
    }
    for(i=length-count;i<length;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}

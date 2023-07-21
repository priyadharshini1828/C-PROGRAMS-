#include<stdio.h>
int main()
{
    char string[100];
    int i=0;
    gets(string);
    while(string[i]!='\0')
    {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
        {
            string[i]=string[i]-32;
            puts(string);
            string[i]=string[i]-33;
             puts(string);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char good[20];
    gets(good);
    int i=0,word=1;
    while(good[i]!='\0')
    {
        if(good[i]==' '||good[i]=='\n'||good[i]=='\t')
        {
            word++;
        }
        i++;
    }
    printf("%d",word);
    return 0;
}

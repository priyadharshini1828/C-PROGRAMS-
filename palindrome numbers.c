#include<stdio.h>
int main()
{
    int n,res,sum=0,temp;
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
      res = n%10;
      sum = (sum*10)+res;
      n=n/10;
    }
    if(temp==sum)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not a palindrome number");
    }
    return 0;
}

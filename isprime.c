#include<stdio.h>
   int prime(int n)
 {
    int i;
    for(i=2;i<=len/2;i++)
    {
    if(n%i!=0)
      continue;
    else
      return 1;
    }
     return 0;
 }
void main()
{
    int num,res=0;
    printf("enter a prime number: ");
    scanf("%d",&num);
    res=prime(num);
    if(res==0)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
}
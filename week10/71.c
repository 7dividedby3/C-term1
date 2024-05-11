#include <stdio.h>
#include <math.h>
void reverse(int n);
int main(void)
{
    int num;
    scanf("%d",&num);
    reverse(num);
}
void reverse(int n)
{
    int a=0,i=0,b=log10(n);
    for(i=0;i<=b;i++)
    {
        a=n%10;
        printf("%d",a);
        n/=10;
    }
}

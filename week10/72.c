#include <stdio.h>
void hannuo(int n,char A,char B,char C);
int main(void)
{
    char A,B,C;
    int n;
    scanf("%d\n",&n);
    scanf("%c %c %c",&A,&B,&C);
    hannuo(n,A,B,C);
}
void hannuo(int n,char A,char B,char C)
{
    if(n==1)
        printf("%d: %c -> %c\n",n,A,B);
    else
    {
        hannuo(n-1,A,C,B);
        printf("%d: %c -> %c\n",n,A,B);
        hannuo(n-1,C,B,A);
    }
}

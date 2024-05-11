#include <stdio.h>
#include <math.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    int n[t];
    long long m[t];
    m[0]=1;m[1]=1;
    for(int i=2;i<t;i++)
        m[i]=m[i-1]+m[i-2];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        printf("%d\n",m[i-1]);
    }
}

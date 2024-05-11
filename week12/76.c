#include <stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    int b=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("It's position is %d!",i+1);
            b++;
        }
    }
    if(!b)
        printf("No data!");
}

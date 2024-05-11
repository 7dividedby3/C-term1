#include <stdio.h>
int main(void)
{
    int a[4],min;
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    min=a[0];
    for(int i=0;i<=4;i++)
    {
        if(min>=a[i])
            min=a[i];
    }
    printf("%d",min);
}

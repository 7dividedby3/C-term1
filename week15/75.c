#include <stdio.h>
int main()
{
    int a[50],*p;
    for(p=a;p<a+49;p++)
        if(scanf("%d",p)==EOF)
            break;
    for(p--;p>a;p--)
        printf("%d ",*p);
    printf("%d",*p);
    return 0;
}

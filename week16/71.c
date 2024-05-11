#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    printf("After sort:%d %d",a>b?b:a,a>b?a:b);
    return 0;
}

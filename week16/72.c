#include <stdio.h>
int main()
{
    int n;scanf("%d",&n);char *a[]={"Jan.","Feb.","Mar.","Apr.","May.","Jun.","Jul.","Aug.","Sep.","Oct.","Nov.","Dec."};
    for(int i=0;i<n;i++)
    {
        int b;
        scanf("%d",&b);
        b>=1&&b<=12?printf("%s\n",*(a-1+b)):printf("no find");
    }
}

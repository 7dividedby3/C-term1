#include <stdio.h>
int main()
{
    int m,n,sum=0,tmp;
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&tmp);
            sum+=tmp;
        }
        printf("%d\n",sum);
    }
    return 0;
}

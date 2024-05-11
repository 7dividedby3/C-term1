#include <stdio.h>
void swap(int *p1,int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(void)
{
    int n,i,j,max,max_n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        max=a[i];
        max_n=i;
        for(j=i;j<n;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
                max_n=j;
            }
        }
        swap(&a[i],&a[max_n]);
    }
    for(i=0;i<n;i++)
    {
        if(i==n-1)
            printf("%d",a[i]);
        else
            printf("%d ",a[i]);
    }
}

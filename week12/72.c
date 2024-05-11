#include <stdio.h>
void swap(int *p1,int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(void)
{
    int n,i,j,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++)
        for(j=0;j<n-1;j++)
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
    for(i=0;i<n;i++)
    {
        if(i==n-1)
            printf("%d",a[i]);
        else
            printf("%d ",a[i]);
    }
}

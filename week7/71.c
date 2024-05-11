#include <stdio.h>
int main(void)
{
    int n=0,A=0,B=0,C=0,D=0,E=0,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s);
        if(s>=90&&s<=100)
            A++;
        if(s>=80&&s<90)
            B++;
        if(s>=70&&s<80)
            C++;
        if(s>=60&&s<70)
            D++;
        if(s>=0&&s<60)
            E++;
    }
    printf("%d %d %d %d %d",A,B,C,D,E);
    return 0;
}

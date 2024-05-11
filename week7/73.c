#include <stdio.h>
int main(void)
{
    char s;
    scanf("%c",&s);
    if(s>=65&&s<=90)
        printf("%d",s);
    else if(s>=97&&s<=122)
    {
        s-=32;
        printf("%c",s);
    }
    return 0;
}

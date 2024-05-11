#include <stdio.h>
int main(void)
{
    int y,m,d,dd;
    scanf("%d/%d/%d",&y,&m,&d);
    switch(m)
    {
        case 1:
            dd=0;
            break;
        case 2:
            dd=31;
            break;
        case 3:
            dd=31+28;
            break;
        case 4:
            dd=31+28+31;
            break;
        case 5:
            dd=31+28+31+30;
            break;
        case 6:
            dd=31+28+31+30+31;
            break;
        case 7:
            dd=31+28+31+30+31+30;
            break;
        case 8:
            dd=31+28+31+30+31+30+31;
            break;
        case 9:
            dd=31+28+31+30+31+30+31+31;
            break;
        case 10:
            dd=31+28+31+30+31+30+31+31+30;
            break;
        case 11:
            dd=31+28+31+30+31+30+31+31+30+31;
            break;
        case 12:
            dd=31+28+31+30+31+30+31+31+30+31+30;
            break;
    }
    if(((y%4==0&&y%100!=0)||y%400==0)&&m>2)
        dd++;
    dd+=d;
    printf("%d",dd);
    return 0;
}

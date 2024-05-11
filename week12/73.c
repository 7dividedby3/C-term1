#include <stdio.h>
#include <string.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    char s[n][11];
    for(int i=0;i<n;i++)
    {
        gets(s[i]);
        if(s[0][0]=='\0')
            i--;
        /*scanf完n和k之后，这个gets会读取一个空行，删去*/
    }
    for(int i=0;i<k;i++)
        for(int j=0;j<n-1-i;j++)
            if(strcmp(s[j],s[j+1])>0)
            {
                char temp[11];
                strcpy(temp,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],temp);
            }
    for(int j=0;j<n;j++)
        puts(s[j]);
}

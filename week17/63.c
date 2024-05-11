void calc(struct student *p,int n)
{
    for(int i=0;i<n;i++)
        p[i].sum=p[i].score[0]+p[i].score[1]+p[i].score[2];
}
void sort(struct student *p,int n)
{
    struct student temp;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            if(p[i].sum<p[j].sum)
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
}

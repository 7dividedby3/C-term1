int update_score(struct student *p, int n, int num, int course, int score)
{
    for(int i=0;i<n;i++)
    {
        if(num==p[i].num)
        {
            int *s=&p[i].math;
            *(s-1+course)=score;
            return i;
        }
    }
    return -1;
}

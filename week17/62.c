struct student fun(struct student  std[], int  n)
{
    int max=std[0].age,a;
    int max_n=0;
    for(int i=1;i<n;i++)
    {
        a=std[i].age;
        a>max?max_n=i,max=a:0;
    }
    return std[max_n];
}

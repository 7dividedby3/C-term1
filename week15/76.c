int main(){
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i,j;
    for(i=0;i<3;i++)
      for(j=0;j<4;j++)
        printf("%d.",*(*(a+i)+j));
    printf("\n");  
    int(*p)[4];     //定义指向一行(4个int)变量的指针变量p
    p=a;
    for(i=0;i<3;i++){ 
      for(j=0;j<4;j++)
        printf("%d.",*(*(p+i)+j));
    }
    return 0; 
}

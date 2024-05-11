#include<stdio.h>
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int div(int a,int b){
    if(b==0){
      printf("Error:Divide by zero.");
      exit(0);
    }
    return a/b;
}
int error(int a,int b){
      printf("Error:Expression undefined!");
      exit(0);
}
int main(){
    int x,y,z; 
    char op='#';  
    int(*fun)(int,int);
    scanf("%d%c%d",&x,&op,&y);
    switch(op){
      case '+': fun=add; break;
      case '-': fun=sub; break;
      case '*': fun=mul; break;
      case '/': fun=div; break;
      default:  fun=error;
    }
    z=(*fun)(x,y);
    printf("Result=%d\n",z);
    return 0; 
}

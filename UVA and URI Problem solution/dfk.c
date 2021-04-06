#include<stdio.h>
long fact(int n)
{
    if(n==0||n==1)
        return(1);
        else
            return(n*fact(n-1));


}
int main()
{
    int N;
    long result;
    bb:
        printf("enter the positive integer numbeer\n");
        scanf("%d",&N);
        if(N<0)
            goto bb;
        result=fact(N);
        printf("\n%d!=%ld",N,result);

}

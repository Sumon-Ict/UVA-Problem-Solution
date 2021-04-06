#include<stdio.h>
int total(int v1,int v2)
//float marks(int b,int n)
{
    int total=v1+v2;
    return(total);
}
int main()
{
    int m,add;
    printf("enter the value of total1\n");
    scanf("%d",&m);
    add=m+total(23,45);
    printf("the result of the add %d\n",add);
    return 0;


}

#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of integer 0 to 3\n");

    scanf("%d",&n);
    switch(n)
    {
    case 0:
        printf("zero");
        break;
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");


    }

}

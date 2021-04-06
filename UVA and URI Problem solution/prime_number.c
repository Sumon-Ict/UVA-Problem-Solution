#include<stdio.h>
int main()
{
    int i, j, t;
    for(i = 2; i <= 100; i++)
    {
        t = 0;
        for(j = 2; j <= i-1; j++)
        {
            if(i%j == 0)
                t = 1;
        }
        if(t == 0)
            printf("%d ", i);
    }
    return 0;
}

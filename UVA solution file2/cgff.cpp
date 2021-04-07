
#include<bits/stdc++.h>
using namespace std;
void ccountSubsets(int arr[], int n, int gcd[], int m)
{

    map<int, int> freq;

    map<int, int> subsets;


    int arrMax = 0;


    for (int i=0; i<n; i++)
    {
        arrMax = max(arrMax, arr[i]);
        freq[arr[i]]++;
    }
    for (int i=arrMax; i>=1; i--)
    {
        int sub = 0;
        int add = freq[i];


        for (int j = 2; j*i <= arrMax; j++)
        {
            add += freq[j*i];

            sub += subsets[j*i];
        }
        subsets[i] = (1<<add) - 1 - sub;
    }

    for (int i=0; i<m; i++)
    {
        if(subsets[gcd[i]]>0)
            printf("Y\n");
        else
            printf("N\n");
    }


}

// Driver program
int main()
{
    int n,m;
     int arr[100001],gcd[1001];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&m);
    for(int j=0;j<m;j++)
        scanf("%d",&gcd[j]);
    ccountSubsets(arr, n, gcd, m);
    return 0;
}

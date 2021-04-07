#include<bits/stdc++.h>
using namespace std;
vector<int>v;

void prime(int n )
{

    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    for (int p=2; p<=n; p++)
       if (prime[p])
        v.push_back(p);
}


int main()
{
  prime(3000);

  for(int i=0;i<12;i++)
    cout<<v[i]<<endl;


}

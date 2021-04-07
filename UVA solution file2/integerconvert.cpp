#include <bits/stdc++.h>
using namespace std;
int product(int x)
{
    int prod = 1;
    while (x) {
        prod *= (x % 10);
        x /= 10;
    }
    return prod;
}
int findNumber(int l, int r)
{
int m=l;
int n=r;
stringstream s,s1;
s<<m;
s1<<n;
string a=s.str();
string b=s1.str();

    int ans = r;
    for (int i = 0; i < b.size(); i++)
        {
        if (b[i] == '0')
            continue;
        string curr = b;
        curr[i] = ((curr[i] - '0') - 1) + '0';

        for (int j = i + 1; j < curr.size(); j++)
            curr[j] = '9';
        int num = 0;
        for (auto c : curr)
            num = num * 10 + (c - '0');
        if (num >= l && product(ans) < product(num))
            ans = num;
    }

    return ans;
}
int main()
{
    int l = 1, r = 10;
    cout << findNumber(l, r) << endl;

    l = 51, r = 62;
    cout << findNumber(l, r) << endl;

    return 0;
}

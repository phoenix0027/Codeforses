#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (i == n)
            {
                break;
            }
            ans++;
        }
        if (k <= m)
            ans *= k;
        else
            ans *= m;
        cout << ans<<endl;
    }
    return 0;
}
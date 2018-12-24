#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        n/=2;
        int a[5000], i;
        for (i=0; i<n; i++)
            cin >> a[i];

        sort(a, a+n);

        int ans1 = 0, ans2 = 0;
        for (i=0; i<n; i++)
        {
            ans1 += abs(a[i] - (i * 2 + 1));
            ans2 += abs(a[i] - (i * 2 + 2));
        }
        cout << min(ans1, ans2) << endl;
    }
    return 0;
}

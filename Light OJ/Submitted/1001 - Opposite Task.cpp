#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tast, n, r;
    while(cin >> tast)
    {
        while(tast--)
        {
            cin >> n;
            r = n/2;
            cout << r << " " << n-r << endl;
        }
    }
    return 0;
}

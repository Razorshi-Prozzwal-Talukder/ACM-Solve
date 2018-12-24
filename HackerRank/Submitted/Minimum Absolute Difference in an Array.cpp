#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[1000000];
int main()
{
    ll n;
    while(cin>>n)
    {
        ll i, j, k=0;
        for(i=0; i<n; i++)
            cin>>ar[i];
        sort(ar, ar+n);
        k=ar[1]-ar[0];
        for(i=2; i<n; i++)
            if(ar[i]-ar[i-1]<k)k=ar[i]-ar[i-1];
            cout<<k<<endl;
    }
    return 0;
}

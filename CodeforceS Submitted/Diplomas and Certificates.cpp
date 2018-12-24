#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n, k;
    while(cin>>n>>k)
    {
        ll cert, deploma, win;
        win = n/2;
        deploma = win/(k+1);
        cert = deploma * k;
        cout<<deploma<<" "<<cert<<" "<<n-(deploma*(k+1))<<endl;
    }
    return 0;
}

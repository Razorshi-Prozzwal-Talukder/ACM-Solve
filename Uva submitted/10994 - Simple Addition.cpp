#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int f(int c) {
    return ((c*(c+1)) >> 1);
}

ll binpow(ll base,ll p) {
    ll res = 1LL;
    while(p) {
        if(p&1) {
            res *= base;
        }
        base *= base;
        p>>=1;
    }
    return res;
}

ll sum(ll num) {
    int b = 0;
    ll g;
    ll ans = 0LL;
    while(num) {
        int digit = num%10;
        ll x = binpow(10,b++)*digit;
        if(x==0) {
            num /= 10;
            continue;
        }
        while(x) {
            g = x;
            x /= 10;
            ans += x*45;
        }
        ans += f(g);
        num/=10;
    }
    return ans;
}

int main() {

    ll a,b;
    while(cin >> a >> b) {
        if(a==-1) return 0;
        cout << sum(b) - sum(a-1) << endl;
    }
}

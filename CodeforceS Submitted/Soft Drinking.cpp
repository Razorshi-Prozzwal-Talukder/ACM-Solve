#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, k, l, c, d, p, nl, np;
    while(cin>>n>>k>>l>>c>>d>>p>>nl>>np)
    {
        int n1, n2, n3, result;
        n1 = (k*l)/nl;
        n2 = c*d;
        n3 = p/np;
        result = min(n1,min(n2,n3));
        cout<<result/n<<endl;
    }
    return 0;
}

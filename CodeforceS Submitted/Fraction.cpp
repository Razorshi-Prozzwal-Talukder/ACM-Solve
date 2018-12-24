#include<bits/stdc++.h>
using namespace std;
int gcd(int n, int m)
{
    if((n>=m)&&((n%m)==0))
        return (m);
    else
        gcd(m, (n%m));
}
main()
{
    int n;
    while(cin>>n)
    {
        int a, b, res;
        b = (n/2)+1;
        a = n - b;
        while(a<b)
        {
            res = gcd(b, a);
            if(res==1)break;
            else
                b++, a--;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}

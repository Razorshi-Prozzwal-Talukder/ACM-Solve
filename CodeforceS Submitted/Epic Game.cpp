#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int n)
{
    int i, ans;
    for(i=1; i<=a && i<=n; i++)
    {
        if(a%i==0 && n%i==0)ans=i;
    }
    return ans;
}
main()
{
    int a, b, n;
    while(cin>>a>>b>>n)
    {
        int i, p=0, ans=0;
        while(n!=0)
        {
            if(p==0)
            {
                ans = gcd(a, n);
                n=n-ans;
                p++;
            }
            else if(p==1)
            {
                ans = gcd(b, n);
                n=n-ans;
                p=0;
            }
        }
        if(p==1)cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;
}

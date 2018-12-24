#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n, a, b, c;
    while(cin>>n>>a>>b>>c)
    {
       //ll r=n%4;
       if(n%4==0)printf("0\n");
       else if(n%4==1)cout<<min(a+b, min(a*3, c))<<endl;
       else if(n%4==2)cout<<min(c*2, min(a*2, b))<<endl;
       else if(n%4==3)cout<<min(a, min(c*3, b+c))<<endl;
    }
    return 0;
}

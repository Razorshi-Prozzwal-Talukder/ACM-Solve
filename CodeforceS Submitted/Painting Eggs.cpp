#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char as[10000010];
main()
{
    ll n, a, g;
    while(cin>>n)
    {
        ll i, A=0, G=0, p=0;
        for(i=1; i<=n; i++)
        {
            cin>>a>>g;
            A=A+a;
            if(abs(A-G)<=500)as[p++]='A';
            else
            {
                A=A-a;
                G=G+g;
                as[p++]='G';
            }
        }
        if(abs(A-G)<=500)cout<<as<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}

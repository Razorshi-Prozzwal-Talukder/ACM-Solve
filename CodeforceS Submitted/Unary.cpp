#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll bigmod(ll num, ll power)
{
    ll ans;
    if(power==0)return 1;

    ans = bigmod(num, power/2);
    ans = (ans*ans)%1000003;

    if(power%2==1)
        ans = (ans*num)%1000003;
    return ans;
}

main()
{
    char as[10000];
    cin>>as;
    string st="";
    ll i, base=1, dec=0, rem, j;
    for(i=0; i<strlen(as); i++)
    {
        if(as[i]=='>')st+="1000";
        else if(as[i]=='<')st+="1001";
        else if(as[i]=='+')st+="1010";
        else if(as[i]=='-')st+="1011";
        else if(as[i]=='.')st+="1100";
        else if(as[i]==',')st+="1101";
        else if(as[i]=='[')st+="1110";
        else if(as[i]==']')st+="1111";
    }
ll len=st.size();
     for(i=len-1, j=0; i>=0 ; i--, j++)
     {
         if(st[i]=='1')
            dec = (dec + bigmod(2, j))%1000003;
     }
     cout<<dec<<endl;
     return 0;
}

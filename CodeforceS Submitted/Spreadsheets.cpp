#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll pow1(ll a, ll b)
{
    if (b == 0)
        return 1;

    ll answer = a;
    ll increment = a;
    ll i, j;

    for(i = 1; i < b; i++)
    {
        for(j = 1; j < a; j++)
        {
            answer += increment;
        }
        increment = answer;
    }
    return answer;
}

int main()
{
    ll t,flag=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        flag=0;
        int x=0;
        while(s[x]>='A'&&s[x]<='Z')++x;

        while(s[x]>='0'&&s[x]<='9')++x;

        if(x==s.size())
            flag=1;

        if(flag==0)
        {
            ll t1=0, j, t2=0, i, p, m=0, r=0, cnt=29;
            char u[30000];

            for( i=1; s[i]!='C'; i++)
            {
                t1=10*t1+(int)s[i]-48;
            }
            i++;

            for( j=i; s[j]!='\0'; j++)
                t2=10*t2+(int)s[j]-48;
            while(t2>0)
            {
                if(t2%26!=0)
                {
                    u[cnt--]='A'+t2%26-1;
                    t2/=26;
                }
                else
                {
                    u[cnt--]='Z';
                    t2/=26;
                    t2--;
                }
            }
            for(j=cnt+1; j<30; j++)
                cout<<u[j];
            cout<<t1;
        }
        else
        {
            ll g=0,t1=0,i=0,z=0,j=0,y;
            while(s[i]>='A'&&s[i]<='Z')
            {
                i++;
            }
            z=i-1;
            while(z>=0)
            {

                g+=(pow1(26,j)*(s[z]-64));
                z--;
                j++;
            }
            for( y=i; s[y]!='\0'; ++y)
            {
                t1=10*t1+(int)s[y]-48;
            }
            cout<<"R"<<t1;
            cout<<"C"<<g;
        }
        cout<<"\n";
    }
    return 0;
}

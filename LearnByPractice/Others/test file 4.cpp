#include<bits/stdc++.h>
using namespace std;
main()
{
    int m, s, i, t;
    string x, y;
    cin>>m>>s;
    if(s==0)
    {
        cout<<(m==1 ? "0 0":"-1 -1");
        return 0;
    }
    for(i=0; i<m; i++)
    {
        t = min(s, 9);
        y += t+'0';
        s -= t;
    }
    if(s>0)
    {
        cout<<"-1 -1";
        return 0;
    }
    for(i=m-1; i>=0; i--)
        x += y[i];

   /* for(i=0; x[i]=='0'; i++);
        x[i]--, x[0]++;

    cout<<x<<" "<<y;*/
    cout<<x<<endl;

    return 0;
}

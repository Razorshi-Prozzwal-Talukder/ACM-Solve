#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, z=0, o=0;
        string s;
        cin>>s;
        for(i=0; i<n; i++)
        {
            if(s[i]=='0')z++;
            else if(s[i]=='1')o++;
        }
        int ans = abs(z-o);
        cout<<ans<<endl;
    }
    return 0;
}

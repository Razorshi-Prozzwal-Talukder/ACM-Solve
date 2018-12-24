#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, m;
    while(cin>>n>>m)
    {
        int p=0, ans;
        while(n!=0 && m!=0)
        {
            if(p==0)
            {
                ans=1;
                n--, m--;
                p++;
            }
            else if(p==1)
            {
                ans=2;
                n--, m--;
                p=0;
            }
        }
        if(ans==1)cout<<"Akshat"<<endl;
        else
            cout<<"Malvika"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, t;
    while(cin>>n>>t)
    {
        if(t==10)
        {
            if(n<=1)cout<<"-1"<<endl;
            else
            {
                for(int i=1; i<n; i++)
                    cout<<"1";
                cout<<"0"<<endl;
            }
        }
        else if(t<10)
        {
            for(int i=1; i<=n; i++)
                cout<<t;

                cout<<endl;
        }
    }
    return 0;
}

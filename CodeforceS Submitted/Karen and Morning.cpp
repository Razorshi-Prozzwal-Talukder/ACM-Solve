#include<bits/stdc++.h>
using namespace std;
main()
{
    char as[1000];
    while(cin>>as)
    {
        int k=1, hour, minit, rev, ans=0;
        hour = ((as[0]-'0')*10)+(as[1]-'0');
        minit = ((as[3]-'0')*10)+(as[4]-'0');

//cout<<rev<<endl;
        while(k)
        {
            rev = ((hour%10)*10)+(hour/10);
            if(minit!=rev)
            {
                if(minit<59)
                {
                    ans++;
                    minit++;
                }
                else if(minit==59)
                {
                    if(hour<23)hour++;
                    else hour=0;

                    ans++;
                    minit=0;
                }

               // cout<<ans<<" "<<rev<<" "<<minit<<endl;
            }
            else
                k=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}

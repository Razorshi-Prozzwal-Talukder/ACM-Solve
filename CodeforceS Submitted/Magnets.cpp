#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, a, p=0, g=0, age=1, ans;
        for(i=1; i<=n; i++)
        {
            cin>>a;
            ans=a/2;
            if(ans==5)
            {
                if(age==5)continue;
                else
                {
                    p=0;
                    g++;
                }
            }
            else if(ans==0)
            {
                if(age==0)continue;
                else
                {
                    p=1;
                    g++;
                }
            }
            if(p==0)age=5;
            else
                age=0;
        }
        cout<<g<<endl;
    }
    return 0;
}

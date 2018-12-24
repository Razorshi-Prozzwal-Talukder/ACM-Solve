#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, k;
    while(cin>>n>>k)
    {
        char as[10000];
        cin>>as;
        int l=strlen(as);
        sort(as, as+l);
        int i, same=1, old=0;

        for(i=1; i<l; i++)
        {
            if(as[i]!=as[i-1])
            {
                old=max(old, same);
                same=1;
            }
            else
                same++;
        }
       old=max(old, same);
       if(old>k)cout<<"NO"<<endl;
       else
        cout<<"YES"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    string hate, love, sen, spa=" ", that="that", it="it";
    hate = "I hate";
    love = "I love";
    int n;
    while(cin>>n)
    {
        int i;
        for(i=1 ; i<=n; i++)
        {
            if(i%2!=0)sen=sen+hate;
            else if(i%2==0)sen=sen+love;
            sen = sen+spa;
            if(i<n)sen=sen+that;
            sen = sen+spa;
        }

         cout<<sen+it<<endl;
    }
   return 0;
}

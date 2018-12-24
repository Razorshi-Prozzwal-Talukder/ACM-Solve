#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    while(cin>>t)
    {
       int i, a;
       for(i=1; i<=t; i++)
       {
           cin>>a;
           if(360%(180-a)==0)cout<<"YES"<<endl;
           else
            cout<<"NO"<<endl;
       }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
   string s, t;
    while(cin>>s>>t)
    {
        int i, po=0;
        for(i=0; i<t.length(); i++)
        {
          if(s[po]==t[i])po++;
        }
        cout<<po+1<<endl;
    }
    return 0;
}

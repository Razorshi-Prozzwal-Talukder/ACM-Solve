#include<bits/stdc++.h>
using namespace std;
vector<int>as;
main()
{
    int n;
    while(cin>>n)
    {
        int i, c=0, t=0, a, b, d=0;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
           if(b!=0)
           {
               c = c+a;
               t++;
           }
           d = d + b;
           if(b==0)as.push_back(a);
        }

        if(!as.empty())
            sort(as.rbegin(), as.rend());

       t--;
       d = d-t;
       for(i=0; i<d && i<as.size(); i++)
        c+=as[i];

       cout<<c<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
long long int as[1000000];
using namespace std;
main()
{
    long long int n, c;
    while(cin>>n>>c)
    {
        long long int x, i, t=1;
        for(i=1; i<=n; i++)
            cin>>as[i];
       for(i=2; i<=n; i++)
       {
          if(as[i]-as[i-1]>c)t=1;
        //  else if(t==0)t=2;
          else
            t++;
       }
       cout<<t<<endl;
    }
    return 0;
}

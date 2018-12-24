#include<bits/stdc++.h>
using namespace std;
int as[5000];
main()
{
    int n;
    while(cin>>n)
    {
       int i, pos=0, neg=0;
       for(i=0; i<n; i++)
       {
           cin>>as[i];
           if(as[i]>0)pos++;
           else if(as[i]<0)neg++;
       }
       sort(as, as+n);
       cout<<1<<" "<<as[0]<<endl;
       if(pos>0)
       {
           cout<<1<<" "<<as[n-1]<<endl;
           cout<<n-2<<" ";
           for(i=1; i<n-1; i++)cout<<as[i]<<" ";
           cout<<endl;
       }
       if(pos==0)
       {
           cout<<2<<" "<<as[1]<<" "<<as[2]<<endl;
           cout<<n-3<<" ";
           for(i=3; i<n; i++)cout<<as[i]<<" ";
           cout<<endl;
       }
    }
    return 0;
}

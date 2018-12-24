#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, f=0, z=0, a;
        for(i=1; i<=n; i++)
        {
            cin>>a;
            if(a==5)f++;
            else
                z++;
        }
        if(z==0)cout<<"-1"<<endl;
        else if(f<9)cout<<"0"<<endl;
        else if(f>=9 && z>0)
        {
            if(f%9==0)
            {
                for(int i=1; i<=f; i++)
                    cout<<"5";
                for(int j=1; j<=z; j++)
                    cout<<"0";
            }
            else
            {
                while(f%9!=0)f--;
                  for(int i=1; i<=f; i++)
                    cout<<"5";
                for(int j=1; j<=z; j++)
                    cout<<"0";
            }
            cout<<endl;
        }
    }
}

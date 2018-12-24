#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, a, b, ar[5000];
    while(cin>>n>>a>>b)
    {
        int i, j, k, place, ans;
        if(b>0)
        {
            while(b>0)
            {
                if(a==n)
                {
                    a = 1;
                    b--;
                }
                else
                {
                    a = a+1;
                    b--;
                }
            }
            cout<<a<<endl;
        }
        else if(b==0)
        {
            cout<<a<<endl;
        }
        else if(b<0)
        {
            b=abs(b);
            while(b>0)
            {
                if(a==1)
                {
                    a = n;
                    b--;
                }
                else
                {
                    a = a-1;
                    b--;
                }
            }
            cout<<a<<endl;
        }
    }
    return 0;
}

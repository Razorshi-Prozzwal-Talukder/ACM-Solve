#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n;
    while(cin>>n)
    {
        long long int a, b, temp = n-1, x=0, y=0;

        if(n==1)
            cout<<"1"<<" "<<"1"<<endl;
        else
        {
            for(a=1; a<=n/2; a++)
            {
                if(n%a==0)
                {
                    b = n/a;
                    if((b-a)<=temp && b>=a)
                    {
                        x=a;
                        y=b;
                        temp = b-a;
                    }
                }
            }
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n!=0 && n>0 && n!=2)
        {
            if(n%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

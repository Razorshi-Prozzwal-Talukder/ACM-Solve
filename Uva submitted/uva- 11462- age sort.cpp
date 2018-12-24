#include<bits/stdc++.h>
using namespace std;
long long int age[2000000];
main()
{
    long long int i,n,j;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&age[i]);
        }
        sort(age,age+i);
        for(i=0; i<n; i++)
        {
            cout<<age[i];
            if(i<(n-1))
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;

}


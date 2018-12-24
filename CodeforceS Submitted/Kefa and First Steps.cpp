#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n, arr[100000];
    while(cin>>n)
    {
        ll i, j, k;
        for(i=0; i<n; i++)
            cin>>arr[i];
        ll count =2, mx=1;
        for(j=1; j<n; j++, count++)
        {
            if(arr[j]<arr[j-1])
                count=1;

            if(mx<count)
                mx=count;
        }
        cout<<mx<<endl;
    }
    return 0;
}

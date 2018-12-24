#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n;
    while(cin>>n)
    {
        if(n==0)cout<<n<<endl;
        else if(n%2==0)cout<<n+1<<endl;
        else
            cout<<(n+1)/2<<endl;
    }
    return 0;
}

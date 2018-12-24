#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n, sum;
    while(cin>>n)
    {
        sum = (n+1)/2;
        if(n%2==0)
            cout<<sum<<endl;
        else
            cout<<-sum<<endl;
    }
    return 0;
}

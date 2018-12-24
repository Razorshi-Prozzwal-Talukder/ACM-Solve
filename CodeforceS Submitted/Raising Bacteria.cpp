#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n;
    while(cin>>n)
    {
        int total=0;
        while(n!=0)
        {
            if(n%2==1)total++;

            n/=2;
        }
        cout<<total<<endl;
    }
    return 0;
}

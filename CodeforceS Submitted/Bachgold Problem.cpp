#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int k;
        k = n/2;
        cout<<k<<endl;
        while(n>3)
        {
           cout<<"2 ";
           n=n-2;
        }
        cout<<n<<endl;
    }
    return 0;
}

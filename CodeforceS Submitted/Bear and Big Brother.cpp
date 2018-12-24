#include<bits/stdc++.h>
using namespace std;
main()
{
    int a, b;
    while(cin>>a>>b)
    {
        int i=0;
        while(a<=b)
        {
            i++;
            a*=3;
            b*=2;
        }
        cout<<i<<endl;
    }
    return 0;
}

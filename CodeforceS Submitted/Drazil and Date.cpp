#include<bits/stdc++.h>
using namespace std;
main()
{
    int a, b, s;
    while(cin>>a>>b>>s)
    {
        if((s>=(abs(a)+abs(b))) && ((s-(abs(a)+abs(b)))%2==0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

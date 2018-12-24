#include<bits/stdc++.h>
using namespace std;
main()
{
    int a, b, c;
    while(cin>>a>>b>>c)
    {
        int d=abs(a-b);
        int e=abs(b-c);
        int f=abs(a-c);
        cout<< max(d, max(e, f))<<endl;
    }
    return 0;
}

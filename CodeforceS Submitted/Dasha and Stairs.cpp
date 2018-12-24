#include<bits/stdc++.h>
using namespace std;
int ar1[100000], ar2[100000];
main()
{
    int a, b; //a=even b=odd
    while(cin>>a>>b)
    {
        if((a+1==b || b+1==a || a==b) && (a!=0 || b!=0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

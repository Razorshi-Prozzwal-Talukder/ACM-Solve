#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int x, y;
    while(cin>>x>>y)
    {
        long long int cop;
        if(y==1 && x>0)
        {
            cout<<"No"<<endl;
            return 0;
        }
        cop=y-1;
        while(cop<x)
        {
            cop+=2;
        }
        if(cop>x || y==0)cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}

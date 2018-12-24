#include<bits/stdc++.h>
using namespace std;
main()
{
    int a, b, c, d, e;
    while(cin>>a>>b>>c>>d>>e)
    {
        if(((a+b+c+d+e)%5==0)&&((a+b+c+d+e)!=0))cout<<(a+b+c+d+e)/5<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}

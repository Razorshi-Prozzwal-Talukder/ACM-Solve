#include<bits/stdc++.h>
using namespace std;
main()
{
    int k, n, w;
    while(cin>>k>>n>>w)
    {
        int sum =0;
        for(int i=1; i<=w; i++)
        {
            sum +=(i * k);
        }
        if(sum>n)
            cout<<sum-n<<endl;
        else
            cout<<"0"<<endl;
    }
}

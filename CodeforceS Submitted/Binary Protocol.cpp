#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, i;
    while(cin>>n)
    {
        int one=0, i, p=0;
        char as[100000];

        getchar();

        cin>>as;

        for(i=0; i<n; i++)
        {
            if(as[i]=='1')
            {
                one++;
            }
            else if(as[i]=='0')
            {
                cout<<one;
                one=0;
            }
        }
        cout<<one<<endl;
    }
    return 0;
}

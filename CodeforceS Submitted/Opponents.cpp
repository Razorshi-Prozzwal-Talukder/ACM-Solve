#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, d;
    while(cin>>n>>d)
    {
        string str;
        int i, j, k, win=0, p=0;
        for(i=1; i<=d; i++)
        {
            getchar();
            cin>>str;
            int lose=0;//, p=0;
            for(j=0; j<sizeof(str); j++)
            {
                if(str[j]=='0')
                    lose=1;
            }
            if(lose==1)
            {
                p++;
                if(p>=win)
                    win=p;
            }
            else if(lose==0)p=0;
        }
        cout<<win<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        string fw[m],sw[m],last;
        for(int i=0; i<m; i++)
        {
            cin>>fw[i]>>sw[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>last;
            for(int j=0; j<m; j++)
            {
                if(last==fw[j])
                {
                    if(fw[j].size()<=sw[j].size())
                        cout<<fw[j]<<" ";
                    else
                        cout<<sw[j]<<" ";
                    break;
                }
            }
        }
    }
    return 0;
}

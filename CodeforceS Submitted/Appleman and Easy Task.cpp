#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, j, cn=0;
        char as[100][100];
        getchar();
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                cin>>as[i][j];
        }
        int prblm_ase=0, tikase=0;
        for(i=0; i<n; i++)
        {
            cn=0;
            for(j=0; j<n; j++)
            {
                if(j+1<n)
                    if(as[i][j+1]=='o')cn++;
                if(i>0)
                    if(as[i-1][j]=='o')cn++;
                if(j>0)
                    if(as[i][j-1]=='o')cn++;
                if(i+1<n)
                    if(as[i+1][j]=='o')cn++;

                if(cn%2!=0)
                {
                    prblm_ase=1;
                    break;
                }
                if(cn%2==0)tikase=1;
                if(prblm_ase==1)break;
            }
        }
        if(prblm_ase==1)cout<<"NO"<<endl;
        else if(tikase==1)cout<<"YES"<<endl;
    }
    return 0;
}

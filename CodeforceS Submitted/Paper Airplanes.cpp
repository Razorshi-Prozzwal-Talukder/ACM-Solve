#include<bits/stdc++.h>
using namespace std;
main()
{
    int i, j, k, n, s, p;
    while(cin>>k>>n>>s>>p)
    {
        int page=0,  pac=1;

        for(i=1; i<=k; i++)
        {
            j=0;
            while(j<n)
            {
               ++page;
               j+=s;
               //printf("man:%d page:%d plane:%d pac:%d\n",i,page,j,pac);
               if(page==p+1)
               {
                   pac++;
                   page=1;
               }
            }
        }
        cout<<pac<<endl;
    }
    return 0;
}

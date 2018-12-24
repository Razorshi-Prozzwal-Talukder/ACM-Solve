#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//ll as[100000000], asd[100000000], w[100000000];
main()
{
    int n, k;
    while(cin>>n>>k)
    {
        int i, x, cnt=1;
        vector<int> man, kstep;

        for(i=0; i<=n; i++)
            man.push_back(i);

        for(i=0; i<k; i++)
        {
            cin>>x;
            kstep.push_back(x);
        }

        for(i=0; i<k; i++)
        {
            cnt = cnt + kstep[i];
            cnt = cnt%(man.size()-1);

            if(!cnt)cnt = (man.size()-1);

            cout<<man[cnt]<<" ";

            man.erase(man.begin()+cnt);
        }
        printf("\n");
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector< vector<int> > as(100001, vector<int>(2, -1));

    int n;
    cin>>n;

    int num;
    for(int i=1; i<=n; i++)
    {
        cin>>num;

        if(as[num][1]==-1)
        {
            as[num][0]=i;
            as[num][1]=0;
        }
        else if(as[num][1]==-2)continue;
        else if(as[num][1]==0)
        {
            as[num][1] = i-as[num][0];
            as[num][0] = i;
        }
        else
        {
            if(i-as[num][0]==as[num][1])
                as[num][0]=i;
            else
                as[num][1]=-2;
        }
    }
    int total = 0;

    for(int i=1; i<100001; i++)
         if(as[i][1]>=0)total+=1;

         cout<<total<<endl;

    for(int i=1; i<100001; i++)
        if(as[i][1]>=0)cout<<i<<" "<<as[i][1]<<endl;


}

#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, m;
    while(cin>>n>>m)
    {
        if(n<m)cout<<"-1"<<endl;
        else if(n==m)
            cout<<n<<endl;
        else
        {
            int sum, total_two=0, step=0, got=0;

            sum = n/2;
            total_two=n/2;
            step=n/2;

            if(n%2!=0)got++;

            if(got==1)step++;

            if(step%m==0)
                cout<<step<<endl;
            else if(step%m!=0)
            {
                while(total_two>0)
                {
                    total_two--;
                    step--;
                    step = step+2;
                    if(step%m==0)break;
                }
                if(step%m==0)cout<<step<<endl;
                else
                    cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}

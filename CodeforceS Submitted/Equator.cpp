#include<bits/stdc++.h>
using namespace std;
long int sec[200010];
main()
{
    long int n;
    while(cin>>n)
    {
        long int i, sum=0, chk=0;
        for(i=1; i<=n; i++)
        {
            cin>>sec[i];
            sum+=sec[i];
        }
        for(i=1; i<=n; i++)
        {
            chk+=sec[i];
            if(sum%2==0){
               if(chk>=(sum/2))break;}
            else
                 if(chk>=(sum/2)+1)break;
        }
        cout<<i<<endl;

    }
    return 0;
}

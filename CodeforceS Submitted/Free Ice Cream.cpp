#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n, start;
    while(cin>>n>>start)
    {
        char sig;
        long long int i, amount, distress=0;

        for(i=1; i<=n; i++)
        {
            cin>>sig>>amount;
            if(sig=='+')
                start+=amount;
            else if(sig=='-' && start>=amount)
                start-=amount;
            else
                distress++;
        }

        cout<<start<<" "<<distress<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
long long int primes[1000050];
bool flag[1000050];
main()
{
    long long int number, total =0, i, j, value, a, b;
    for(a=2; a<=1000010; a++)
    {
        flag[a] = 1;
    }
    value = sqrt(1000010)+1;
    for(a=2; a<value; a++)
    {
        if(flag[a])
        {
            for(b=a; b*a<=1000010; b++)
                flag[a*b]=0;
        }
    }
    while(cin>>number)
    {
        int ans = 0;
        if(number<12)break;
        for(i=4; i<=number/2; i++)
        {
            if(flag[i]==0)
            {
                if(flag[number-i]!=1)
                {
                    ans++;
                    cout<<i<<" "<<number-i<<endl;
                }
            }
            if(ans==1)break;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
void deci_to_threebase(int n)
{
    long long int remainder;
    long long i=0,ar[1234];
    if(n==0) cout<< 0;
    else
    {
        while(n)
        {
            remainder = n%3;
            ar[i]=remainder;
            i++;
            n/=3;
            //cout<<remainder;
        }
        for(int j=i-1; j>=0; j--) cout<<ar[j];
    }
}
main()
{
    long long int test=1, n, ans;
    while(scanf("%lld",&n)!=EOF)
    {

        if(n<0)break;
        else
            deci_to_threebase(n);
        cout<<endl;
    }

    return 0;
}

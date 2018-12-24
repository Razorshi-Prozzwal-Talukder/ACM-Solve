#include<bits/stdc++.h>
using namespace std;
main()
{
    long int n, arr[200];
    while(cin>>n)
    {
        int i, total=0, sum1=0, sum2=0;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            sum1+=arr[i];
        }

        sort(arr, arr+n);

        for(i=n-1; i>=0; i--)
        {
            sum2+=arr[i];
            total++;
            if((sum1-sum2)<sum2)
                break;
        }
        cout<<total<<endl;
    }
    return 0;
}

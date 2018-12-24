#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, arr[5000], m;
    while(cin>>n)
    {
        int carry, j, i, temp;
        arr[0]=1;
        m=1;
        for(i=2; i<=n; i++)
        {
            int carry=0;
            for(j=0; j<m; j++)
            {
                temp = arr[j]*i+carry;
                arr[j] = temp%10;
                carry = temp/10;
            }
            while(carry)
            {
                arr[m] = carry%10;
                carry = carry/10;
                m++;
            }
        }
        for(i=m-1; i>=0; i--)
            cout<<arr[i];
        cout<<endl;
    }
    return 0;
}

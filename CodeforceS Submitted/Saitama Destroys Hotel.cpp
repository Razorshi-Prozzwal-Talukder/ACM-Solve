#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, s;
    while(cin>>n>>s)
    {
        int i, j=0, sum, array[200], f, t;
        for(i=1; i<=n; i++)
        {
            cin>>f>>t;
            sum = f+t;
            array[j] = sum;
            j++;
        }
        int max=0;
        for(int k=0; k<j; k++)
        {
            if(array[k]>max)
                max = array[k];
        }
        if(max>=s)
            cout<<max<<endl;
        else
           cout<<s<<endl;
    }
    return 0;
}

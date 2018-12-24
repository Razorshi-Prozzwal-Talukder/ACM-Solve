#include<bits/stdc++.h>
using namespace std;
int gcd(int j, int i)
{
    int r;
    if(j%i==0)
        return i;
    else if(j%i != 0)
    {
        for(r = j; r>=1; r--)
        {
            if(j%r==0 && i%r==0)
                break;
        }

    }
    return r;
}
main()
{
    int n, g, i, j, k;
    for(k=1; k<=100; k++)
    {
        scanf("%d",&n);
        if(n==0)break;
        else
        {
            g = 0;
            for(i=1; i<n; i++)
            {
                for(j=i+1; j<=n; j++)
                    g += gcd(i,j);

            }
            cout<<g<<endl;
        }
    }
    return 0;
}

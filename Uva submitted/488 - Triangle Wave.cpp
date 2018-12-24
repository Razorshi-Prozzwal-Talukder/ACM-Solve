#include<bits/stdc++.h>
using namespace std;
main()
{
    int i, j, k, l, test, amplitude, frequency, a, b;
    scanf("%d",&test);

    //cout<<endl;
    for(a=1; a<=test; a++)
    {
        scanf("%d\n%d",&amplitude,&frequency);
        //cout<<endl<<endl;
        for(b=1; b<=frequency; b++)
        {
            for(i=1; i<=amplitude; i++)
            {
                for(j=1; j<=i; j++)
                {
                    cout<<i;
                }
                cout<<endl;
            }
            for(k=amplitude-1; k>=1; k--)
            {
                for(l=1; l<=k; l++)
                    cout<<k;

                cout<<endl;
            }
            if(b!=frequency)cout<<endl;
        }
        if(a!=test)cout<<endl;
    }
    return 0;
}

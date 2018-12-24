#include<bits/stdc++.h>
using namespace std;
main()
{
    int test, n, i, j, m;
    int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    while(scanf("%d",&test)==1)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%d",&n);
            for(j=n; j>0; j--)
            {
                if(j<=9)
                {
                    if(j==1)one++;
                    else if(j==2)two++;
                    else if(j==3) three++;
                    else if(j==4)four++;
                    else if(j==5)five++;
                    else if(j==6)six++;
                    else if(j==7)seven++;
                    else if(j==8)eight++;
                    else if(j==9)nine++;
                }
                else
                {
                    m =j;
                    while(m!=0)
                    {
                        int sum = m%10;
                        if(sum==0)zero++;
                        else if(sum==1)one++;
                        else if(sum==2)two++;
                        else if(sum==3)three++;
                        else if(sum==4)four++;
                        else if(sum==5)five++;
                        else if(sum==6)six++;
                        else if(sum==7)seven++;
                        else if(sum==8)eight++;
                        else if(sum==9)nine++;

                        m = m/10;
                    }
                }
            }
            printf("%d %d %d %d %d %d %d %d %d %d\n",zero,one,two,three,four,five,six,seven,eight,nine);
            zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;

        }
    }
    return 0;
}

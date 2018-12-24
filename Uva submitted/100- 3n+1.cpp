#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int i,j,k,l,c=1,arry[200000],a=0,temp=0,x;
    while(scanf("%lld %lld",&i,&j)==2)
    {
        if(i==0 || j==0)break;
        else
        {
            if(i<j)
            {
                for(k=i; k<=j; k++)
                {
                    if(k==1)
                    {
                        arry[a]=c;
                        c=1;
                        a++;
                    }
                    else
                    {
                        for(l=k; l>1; )
                        {
                            if(l%2==0)
                            {
                                l=l/2;
                                c++;
                            }
                            else
                            {
                                l=(3*l)+1;
                                c++;
                            }
                        }
                        arry[a]=c;
                        a++;
                        c=1;
                    }
                }
                for(x=0; x<=a-1; x++)
                {
                    if(arry[x]>temp)
                        temp=arry[x];
                }
                printf("%lld %lld %lld\n",i,j,temp);
                a=0;
                c=1;
                temp=0;
            }
            else
            {
                for(k=j; k<=i; k++)
                {
                    if(k==1)
                    {
                        arry[a]=c;
                        c=1;
                        a++;
                    }
                    else
                    {
                        for(l=k; l>1; )
                        {
                            if(l%2==0)
                            {
                                l=l/2;
                                c++;
                            }
                            else
                            {
                                l=(3*l)+1;
                                c++;
                            }
                        }
                        arry[a]=c;
                        a++;
                        c=1;
                    }
                }
                for(x=0; x<=a-1; x++)
                {
                    if(arry[x]>temp)
                        temp=arry[x];
                }
                printf("%lld %lld %lld\n",i,j,temp);
                a=0;
                c=1;
                temp=0;
            }

        }
    }
    return 0;
}

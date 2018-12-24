#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, j, k, ar[1000], z=0;
        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
            if(ar[i])z++;
        }

        if(z==0)printf("NO\n");

        else
        {
            printf("YES\n%d\n",z);
            if(z==1)printf("1 %d\n",n);

            else
            {
                for(i=1; i<=n; )
                {
                    if(ar[i]!= 0 && ar[i+1] != 0 && i!=n)
                    {
                        printf("%d %d\n", i, i);
                        i++;
                    }
                    else if(ar[i]!=0 && ar[i+1]==0 && i!=n)
                    {
                        int sum=0;
                        k=i;
                        sum = sum+ar[k];
                        i++;
                        while(ar[i]==0 && i<=n)i++;
                        printf("%d %d\n", k, i-1);
                    }
                    else if(ar[i]==0 && i!=n)
                    {
                        k=i;
                        while(ar[i]==0 && i<=n)i++;

                        if(ar[i+1]==0)
                        {
                            i++;
                            while(ar[i]==0 && i<=n)i++;
                            printf("%d %d\n",k,i-1);
                        }
                        else if(ar[i+1]!=0)
                        {
                            printf("%d %d\n",k,i);
                            i++;
                        }
                    }
                    else if(i==n && ar[i]!=0)
                    {
                        printf("%d %d\n",i, i);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

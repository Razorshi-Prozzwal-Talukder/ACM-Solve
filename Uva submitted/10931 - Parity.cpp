#include<bits/stdc++.h>
using namespace std;
main()
{
    long int n, remainder, k, i, j, count=0, l;
    long int s[100];
    while(scanf("%ld",&n)==1)
    {
        if(n==0)break;
        else if(n==1)printf("The parity of 1 is 1 (mod 2).\n");
        else
        {
             count=0;
             k=0;
            while(n)
            {
                remainder=n%2;
                s[k++]=remainder;
                n=n/2;
            }
            printf("The parity of ");
           for(j=k-1; j>=0; j--) cout<<s[j];

           for(l=0; l<k; l++)
           {
               if(s[l]==1)
                count++;
           }
            printf(" is %ld (mod 2).\n",count);
        }
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int n,i,j,k,ans1,ans2,a,b=0,testcase,tc;
    long long int p1=0,d1;                  ///declare prime
    long long int put1;                     ///for saving prime numbers
    long long int cir,sms;                  ///cir=circle, sms= sending sms

    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        sms=0;
        k=0;
        if(n!=0)
        {
            for(i=1; i<n; i++)
            {
                j=(i+k+abs(k-i))/2;
                k=j;
            }
            put1=j;

            for(cir=j; cir>=0; cir--)
            {
                for(d1=1; d1<=put1/2; d1++)
                {
                    if(put1%d1==0)
                        p1++;

                }
                if(p1==1)
                {
                    ans2=put1;
                    ans1=n-ans2;
                    for(a=1; a<=ans1/2; a++)
                    {
                        if(ans1%a==0)
                            b++;

                    }
                    if(b==1)
                    {
                        sms++;
                        printf("%lld = %lld + %lld\n",n,ans1,ans2);
                        b=0;
                        p1=0;
                        break;
                    }
                }
                else
                {
                    put1=put1-1;
                    b=0;
                    p1=0;
                }
            }
            if(sms==0)
                printf("Goldbach's conjecture is wrong.\n");
        }

    }
    return 0;

}




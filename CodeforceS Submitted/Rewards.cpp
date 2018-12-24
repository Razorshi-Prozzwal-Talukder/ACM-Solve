#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, a1, a2, a3, b1, b2, b3, sum_c, sum_m;
    while(cin>>a1>>a2>>a3)
    {
        cin>>b1>> b2>> b3;
        cin>>n;
        sum_c = a1+a2+a3;
        sum_m = b1+b2+b3;

        if(sum_c==0)
        {
            if(sum_m==0)cout<<"YES"<<endl;
            else
            {
                if(sum_m<=10 && sum_m>0)cout<<"YES"<<endl;
                else
                {
                    if(sum_m%10==0)n=n-(sum_m/10);
                    else
                        n=n-((sum_m/10)+1);

                    if(n>=0)cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }
            }
        }
        else if(sum_c<=5)
        {
            n=n-1;
            if(sum_m==0)cout<<"YES"<<endl;
            else
            {
                if(sum_m<=10 && sum_m>0)
                {
                    n = n-1;
                    if(n>=0)cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }
                else
                {
                    if(sum_m%10==0)n=n-(sum_m/10);
                    else
                        n=n-((sum_m/10)+1);

                    if(n>=0)cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }
            }
        }
        else if(sum_c>5)
        {
            if(sum_c%5==0)n=n-(sum_c/5);
            else
                n=n-((sum_c/5)+1);
            if(sum_m<=10)
            {
                n = n-1;
                if(n>=0)cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                if(sum_m%10==0)n=n-(sum_m/10);
                else
                    n=n-((sum_m/10)+1);

                if(n>=0)cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}

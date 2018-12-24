#include<bits/stdc++.h>
using namespace std;
main()
{
    char first[10000], second[10000];
    int n;
    while(cin>>n)
    {
        int asi, jaitam, shamne, fise, total=0;
        cin>>first;
        cin>>second;
        for(int i=0; i<strlen(first); i++)
        {
            asi = first[i]-'0';
            jaitam = second[i]-'0';

            shamne =0, fise=0;

            while(asi!=jaitam)
            {
                if(asi==9)
                {
                    asi=0;
                    shamne++;
                }
                else
                {
                    asi++, shamne++;
                }
            }

            asi = first[i]-'0';
            jaitam = second[i]-'0';
            while(asi!=jaitam)
            {
                if(asi==0)
                {
                    asi=9;
                    fise++;
                }
                else
                {
                    asi--, fise++;
                }
            }
            total += min(shamne, fise);
        }
        cout<<total<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    char st[500];
    while(cin>>st)
    {
        int i, sum=0, cnt1, cnt2;
        int l=strlen(st);

        char cad='a';

        cnt1=0, cnt2=1;
        while(cad!=st[0])
        {
            cad = cad+1;
            cnt1++;
        }

        cad = 'z';

        while(cad!=st[0])
        {
            cad = cad-1;
            cnt2++;
        }
        if(cnt1<=cnt2)sum+=cnt1;
        else
            sum+=cnt2;
        cnt1=0, cnt2=0;

        for(i=1; i<l; i++)
        {
            cad=st[i-1];
            while(cad!=st[i])
            {
                if(cad!=st[i] && cad=='z')
                {
                    cad='a';
                    cnt1++;
                }
                else
                {
                    cad=cad+1;
                    cnt1++;
                }
            }

            cad=st[i-1];
            while(cad!=st[i])
            {
                if(cad!=st[i] && cad=='a')
                {
                    cad='z';
                    cnt2++;
                }
                else
                {
                    cad=cad-1;
                    cnt2++;
                }
            }

            if(cnt1<=cnt2)sum+=cnt1;
            else
                sum+=cnt2;

            cnt1=0, cnt2=0;
        }
        cout<<sum<<endl;
    }
    return 0;
}

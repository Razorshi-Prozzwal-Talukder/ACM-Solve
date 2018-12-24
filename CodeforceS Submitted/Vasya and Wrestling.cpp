#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>pos, neg;
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, x, sum_pos=0, sum_neg=0, lst_pos, lst_neg;
        for(i=0; i<n; i++)
        {
            cin>>x;
            if(x>0)
            {
                lst_pos = i;
                sum_pos+=x;
                pos.push_back(x);
            }
            else
            {
                lst_neg = i;
                x=abs(x);
                sum_neg+=x;
                neg.push_back(x);
            }
        }
        if(sum_pos>sum_neg)printf("first\n");
        else if(sum_neg>sum_pos)printf("second\n");
        else
        {
            for(i=0; i<min(pos.size(), neg.size()); i++)
            {
                if(pos[i]>neg[i])
                {
                    printf("first\n");
                    return 0;
                }
                else if(neg[i]>pos[i])
                {
                    printf("second\n");
                    return 0;
                }
            }
            if(pos.size()>neg.size())printf("first\n");
            else if(pos.size()<neg.size())printf("second\n");
            else
            {
                if(lst_pos>lst_neg)printf("first\n");
                else
                    printf("second\n");
            }
        }
    }
    return 0;
}

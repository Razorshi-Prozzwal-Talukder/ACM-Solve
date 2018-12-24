#include<bits/stdc++.h>
using namespace std;
main()
{
    int c, v0, v1, a, l;
    while(cin>>c>>v0>>v1>>a>>l)
    {
        int page=0, day=0, nxt_day, as=1;
        while(page<c)
        {
            day++;
            if(day==1)page=page+v0;
            else
            {
                page = page-l;
                nxt_day = v0 + (as*a);
                if(nxt_day > v1)page = page + v1;
                else
                    page = page + nxt_day;
                    as++;
            }
        }
        cout<<day<<endl;
    }
    return 0;
}

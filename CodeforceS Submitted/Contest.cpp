#include<bits/stdc++.h>
using namespace std;
main()
{
    int a, b, c, d;
    while(cin>>a>>b>>c>>d)
    {
        int p , q;
        p = max(3*a/10, a-((a*c)/250));
        q = max(3*b/10, b-((b*d)/250));
        if(p > q)printf("Misha\n");
        else if(p < q)printf("Vasya\n");
        else
            printf("Tie\n");
    }
    return 0;
}

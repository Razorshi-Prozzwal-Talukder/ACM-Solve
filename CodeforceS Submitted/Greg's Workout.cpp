#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, as[100000];
    while(cin>>n)
    {
        int i, chest=0, biceps=0, backs=0;
        for(i=1; i<=n; i++)cin>>as[i];
        int c=1, bi=0, ba=0;
        i=1;
        while(i<=n)
        {
            if(c==1)
            {
                chest+=as[i];
                c=0, bi=1, i++;
            }
            else if(bi==1)
            {
                biceps+=as[i];
                bi=0, ba=1, i++;
            }
            else if(ba==1)
            {
                backs+=as[i];
                ba=0, c=1, i++;
            }
        }
        if(chest>biceps && chest>backs)printf("chest\n");
        else if(biceps>chest && biceps>backs)printf("biceps\n");
        else if(backs>chest && backs>biceps)printf("back\n");
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    int a, b;
    while(cin>>a>>b)
    {
        int i, x=0, y=0, z=0;
        for(i=1; i<=6; i++)
        {
            if(abs(a-i) > abs(b-i))x++;
            else if(abs(a-i) < abs(b-i))y++;
            else
                z++;
        }
        printf("%d %d %d\n", y, z, x);
    }
    return 0;
}

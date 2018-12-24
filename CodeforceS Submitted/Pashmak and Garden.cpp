#include<bits/stdc++.h>
using namespace std;
main()
{
    int x1, y1, x2, y2;
    while(cin>>x1>>y1>>x2>>y2)
    {
        int a, b, x3, y3, x4, y4;
        if(x1==x2 && y1!=y2)
        {
            a = abs(y2-y1);
            x3 = x2+a, y3=y2, x4 = x3, y4=y1;
        }
        else if(x1!=x2 && y1==y2)
        {
            a = abs(x2-x1);
            x3 = x2, y3 = y2+a, x4 = x1, y4 = y1+a;
        }
        else if(x1!=x2 && y1!=y2)
        {
            a = abs(x2-x1), b=abs(y2-y1);
            if(a!=b)
            {
                printf("-1\n");
                break;
            }
            x3=x1, y3=y2, x4=x2, y4=y1;
        }
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    return 0;
}

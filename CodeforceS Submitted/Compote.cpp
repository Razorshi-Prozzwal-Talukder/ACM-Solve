#include<bits/stdc++.h>
using namespace std;
main()
{
    int a, b, c;
    while(cin>>a>>b>>c)
    {
        int sum=0, p=0;
        while(a>0)
        {
            if(a*2<=b && a*4<=c){
                sum = a+(2*a)+(4*a);
                p=1;
            }
            if(p==1)break;
            else
                a--;
        }
        cout<<sum<<endl;
    }
    return 0;
}

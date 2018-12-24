#include<bits/stdc++.h>
using namespace std;
main()
{
    int a, b, c, d;
    while(cin>>a>>b>>c>>d)
    {
        int ar[4], cnt=0, i;
        ar[0]=a;
        ar[1]=b;
        ar[2]=c;
        ar[3]=d;
        sort(ar, ar+4);
        for(i=0; i<3; i++)
        {
            if(ar[i]==ar[i+1])cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

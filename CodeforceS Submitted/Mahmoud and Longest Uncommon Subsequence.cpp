#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char ar[1000000], ar2[1000000];
main()
{
    gets(ar);
    gets(ar2);
    if(strcmp(ar, ar2)==0)printf("-1\n");
    else
    {
        ll l1, l2, s;
        l1= strlen(ar);
        l2= strlen(ar2);
        s= max(l1, l2);
        cout<<s<<endl;
    }

    return 0;
}

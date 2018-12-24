#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    char as[10000];
    while(cin>>n)
    {
        getchar();
        gets(as);
        int i, cap_l=0, cap_w=0;
        for(i=0; i<strlen(as); i++)
        {
            if(as[i]==' ')
            {
                cap_w=max(cap_w, cap_l);
                cap_l=0;
            }
            else if(as[i]>='A' && as[i]<='Z')cap_l++;
        }
        cap_w=max(cap_w, cap_l);
        cout<<cap_w<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        char ch, st[500];
        int i, v=0, j=0;
        getchar();
        for(i=1; i<=n; i++)
        {
            cin>>ch;
            if((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y') && v==0)
            {
                st[j++]=ch;
                v=1;
            }
            if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='y')
            {
                st[j++]=ch;
                v=0;
            }
        }
        st[j]='\0';
        cout<<st<<endl;
        st[0]='\0';
    }
    return 0;
}

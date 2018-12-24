#include<bits/stdc++.h>
using namespace std;
main()
{
    char a[5000];
    while(cin>>a)
    {
        int i, o=0, des=0;
        for (i=0; i<strlen(a); i++)
        {
            if(a[i]=='o')o++;
            else
                des++;
        }
        if(o==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(des%o==0 && o!=0)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

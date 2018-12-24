#include<bits/stdc++.h>
using namespace std;
main()
{
    char s1[200], s2[]="hello";
    while(cin>>s1)
    {
        int i,j=0;
        int len = strlen(s1);
        for(i=0; i < len; i++)
        {
            if(s1[i]==s2[j])
                j++;
        }

        if(j==5)
            cout<<"YES"<<endl;
        else
             cout<<"NO"<<endl;
    }
}

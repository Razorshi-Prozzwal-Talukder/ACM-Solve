#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    char s[200];
    while(cin>>n)
    {
        int i, count=0;
        for(i=0; i<n; i++)
        {
            cin>>s[i];
        }
        s[i] = '\0';
        for(int j=0; j<n; j++)
        {
            if(s[j]==s[j+1])
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

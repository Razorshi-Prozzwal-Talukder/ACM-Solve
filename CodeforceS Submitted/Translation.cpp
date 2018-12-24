#include<bits/stdc++.h>
using namespace std;
main()
{
    char s1[300], s2[300], s3[300];
    while(cin>>s1>>s2)
    {
        int j=0;
        int len = strlen(s2);
        for(int i=len-1; i>=0; i--)
        {
            s3[j] = s2[i];
            j++;
        }
        s3[j] = '\0';
        if(strcmp(s1, s3)==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

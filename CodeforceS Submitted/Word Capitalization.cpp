#include<bits/stdc++.h>
using namespace std;
main()
{
    char s1[2000];
    while(cin>>s1)
    {
        if(s1[0]>='a')
            s1[0]=s1[0]-32;

        cout<<s1<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    while(cin>>s)
    {
        cout<<s;
        reverse(s.begin(), s.end());
        cout<<s<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    string s;
    while(cin >> s)
    {
        if (s.size() == 1) ans = ans + s[s.size()-1]-'0';
        else
        {
             ans = ans + s[s.size()-1]-'0';
              ans = ans + (s[s.size()-2]-'0')*10;
        }
        if(ans%4==0)printf("4\n");
        else
            printf("0\n");
    }
    return 0;
}

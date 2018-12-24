#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int n;
    while(cin>>n)
    {
        string str;
        cin>>str;
        int len = str.size();
        int i;
        if(len==1)
        {
            if(str=="0")cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
            return 0;
        }
        if(len==2)
        {
            if(str=="00")cout<<"No"<<endl;
            else if(str=="01")cout<<"Yes"<<endl;
            else if(str=="10")cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
            return 0;
        }
        for(i=1; i<len-1; i++)
        {
            if(str[i]=='0' && str[i-1]=='0' && str[i+1]=='0')
            {
                cout<<"No"<<endl;
                return 0;
            }
            else if(str[i]=='1' &&(str[i-1]=='1' || str[i+1]=='1'))
            {
                cout<<"No"<<endl;
                return 0;
            }
        }
        if(str[len-1]=='0' && str[len-2]=='0')
        {
            cout<<"No"<<endl;
            return 0;
        }
        if(str[0]=='0' && str[1]=='0')
        {
            cout<<"No"<<endl;
            return 0;
        }
        cout<<"Yes"<<endl;
    }
     return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore(); ///getchar();

    while(t--)
    {
        string str;

        getline(cin,str);

        stack<char> stk;

        for(int i=0; i<str.length(); i++)
        {
            if(!stk.empty() && str[i]==')' && stk.top()=='(')
            {
                stk.pop();
            }
            else if(!stk.empty() && str[i]==']' && stk.top()=='[')
            {
                stk.pop();
            }
            else
            {
                stk.push(str[i]);
            }
        }

        if(stk.empty())
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}

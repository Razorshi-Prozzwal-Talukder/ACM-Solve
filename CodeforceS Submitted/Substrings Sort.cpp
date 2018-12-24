#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=-1;
    cin>>n;
    string S[n];
    string s;
    for (int i=0; i<n; i++)
        cin>>S[i];

    for (int i=0; i<n; i++)
        for (int j=i; j<n; j++)
        {
            string s1=S[j],s2=S[i];
            if (s1.length() <s2.length())
            {
                s=S[j];
                S[j]=S[i];
                S[i]=s;
            }
        }
    int r=1;
    for (int i=0; i<n-1; i++)
    {
        string s1=S[i],s2=S[i+1];
        char *istr;
        istr=strstr(s2.c_str(),s1.c_str());
        if (istr==NULL) r=0;
    }
    if (r==0) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for (int i=0; i<n; i++)
            cout<<S[i]<<endl;
    }
}

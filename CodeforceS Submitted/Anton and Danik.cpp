#include<bits/stdc++.h>
using namespace std;
main()
{
    long int n;
    char a[100000];
    while(cin>>n)
    {
        getchar();
        gets(a);
        long int ca=0, cd=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]=='A')
                ca++;
            if(a[i]=='D')
                cd++;
        }
        if(ca>cd)
            cout<<"Anton"<<endl;
        else if(ca<cd)
            cout<<"Danik"<<endl;
        else
            cout<<"Friendship"<<endl;
    }
    return 0;
}

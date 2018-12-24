#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int p=0,num;
        for(int i=1; i<=n; i++){
            cin>>num;
            if(num==1)p++;
        }
        if(p>0)cout<<"HARD"<<endl;
        else
            cout<<"EASY"<<endl;
    }
    return 0;
}

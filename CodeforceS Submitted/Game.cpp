#include<bits/stdc++.h>
using namespace std;
main()
{
    int n1, n2, k1, k2;
    cin>>n1>>n2>>k1>>k2;
    if(n1>n2)
        cout<<"First"<<endl;
    else if(n1<n2)
        cout<<"Second"<<endl;
    else
    {
        if(k1==k2 || ((k1<k2)&&(k2==n2)))
            cout<<"Second"<<endl;
        else if(k1>k2 && k1!=n1 )
            cout<<"Second"<<endl;
            else
                cout<<"First"<<endl;
    }
    return 0;
}

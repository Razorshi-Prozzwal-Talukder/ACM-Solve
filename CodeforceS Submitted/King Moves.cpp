#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    char ch;
    while(cin>>ch>>n)
    {
        if((ch>='b'&&ch<='g')&&(n>=2&&n<=7))cout<<8<<endl;
        else if((ch=='a'||ch=='h')&&(n<2||n>7))cout<<3<<endl;
        else
            cout<<5<<endl;
    }
    return 0;
}

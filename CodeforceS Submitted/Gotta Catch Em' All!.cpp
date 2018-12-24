#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
char str[100000000];
main()
{
    while(cin>>str)
    {
        ll len = strlen(str);
        ll i, B_cont=0, u_cont=0, l_cont=0, b_cont=0, a_cont=0, s_cont=0, r_cont=0, t_cont=0;
        for(i=0; i<len ; i++)
        {
            if(str[i]=='B')B_cont++;
            else if(str[i]=='u')u_cont++;
            else if(str[i]=='l')l_cont++;
            else if(str[i]=='b')b_cont++;
            else if(str[i]=='a')a_cont++;
            else if(str[i]=='s')s_cont++;
            else if(str[i]=='r')r_cont++;
        }
        if(B_cont>0 && u_cont>1 && l_cont>0 && b_cont>0 && a_cont>1 && s_cont>0 && r_cont>0)
        {
            u_cont = u_cont/2;
            a_cont = a_cont/2;
            cout<<min(B_cont, min(u_cont, min(l_cont, min(b_cont, min(a_cont, min(s_cont, r_cont)))))) <<endl;
        }
        else
             cout<<t_cont<<endl;
    }
    return 0;
}

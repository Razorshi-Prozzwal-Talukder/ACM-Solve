#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char str[100010];
main()
{
    ll n;
    while(cin>>n)
    {
        ll ip, len, a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0;
        ll o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0, cnt=0;
        getchar();
        cin>>str;
        len = strlen(str);
        if(len>26)cout<<"-1"<<endl;
        else
        {
            for(ip=0; ip<len; ip++)
            {
                if(str[ip]=='a')a++;
                else if(str[ip]=='b')b++;
                else if(str[ip]=='c')c++;
                else if(str[ip]=='d')d++;
                else if(str[ip]=='e')e++;
                else if(str[ip]=='f')f++;
                else if(str[ip]=='g')g++;
                else if(str[ip]=='h')h++;
                else if(str[ip]=='i')i++;
                else if(str[ip]=='j')j++;
                else if(str[ip]=='k')k++;
                else if(str[ip]=='l')l++;
                else if(str[ip]=='m')m++;
                else if(str[ip]=='n')n++;
                else if(str[ip]=='o')o++;
                else if(str[ip]=='p')p++;
                else if(str[ip]=='q')q++;
                else if(str[ip]=='r')r++;
                else if(str[ip]=='s')s++;
                else if(str[ip]=='t')t++;
                else if(str[ip]=='u')u++;
                else if(str[ip]=='v')v++;
                else if(str[ip]=='w')w++;
                else if(str[ip]=='x')x++;
                else if(str[ip]=='y')y++;
                else if(str[ip]=='z')z++;

                if(a>1||b>1||c>1||d>1||e>1||f>1||g>1||h>1||i>1||j>1||k>1||l>1||m>1||n>1||o>1||p>1||
                        q>1||r>1||s>1||t>1||u>1||v>1||w>1||x>1||y>1||z>1)
                {
                    cnt++;

                     if(str[ip]=='a')a=1;
                else if(str[ip]=='b')b=1;
                else if(str[ip]=='c')c=1;
                else if(str[ip]=='d')d=1;
                else if(str[ip]=='e')e=1;
                else if(str[ip]=='f')f=1;
                else if(str[ip]=='g')g=1;
                else if(str[ip]=='h')h=1;
                else if(str[ip]=='i')i=1;
                else if(str[ip]=='j')j=1;
                else if(str[ip]=='k')k=1;
                else if(str[ip]=='l')l=1;
                else if(str[ip]=='m')m=1;
                else if(str[ip]=='n')n=1;
                else if(str[ip]=='o')o=1;
                else if(str[ip]=='p')p=1;
                else if(str[ip]=='q')q=1;
                else if(str[ip]=='r')r=1;
                else if(str[ip]=='s')s=1;
                else if(str[ip]=='t')t=1;
                else if(str[ip]=='u')u=1;
                else if(str[ip]=='v')v=1;
                else if(str[ip]=='w')w=1;
                else if(str[ip]=='x')x=1;
                else if(str[ip]=='y')y=1;
                else if(str[ip]=='z')z=1;
                }
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}

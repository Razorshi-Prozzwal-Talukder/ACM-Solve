#include<bits/stdc++.h>
using namespace std;
main()
{
    char str[2010];
    while(gets(str))
    {
        int ip, a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0;
        int o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
        int len=strlen(str);
        //cout<<len<<endl;
        for(ip=0; ip<len; ip++)
        {
            if(str[ip]=='}'||str[ip]=='{'||str[ip]==','||str[ip]==' ')continue;
            else if(str[ip]=='a')a=1;
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
        int sum=a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z;
        cout<<sum<<endl;
    }
    return 0;
}

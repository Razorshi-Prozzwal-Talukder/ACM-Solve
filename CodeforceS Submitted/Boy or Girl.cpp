#include<bits/stdc++.h>
using namespace std;
main()
{
    char sa[200];
    while(cin>>sa)
    {
        int i1, a=0,b=0,c=0,d=0,e=0,f=0, g=0, h=0, i=0, j=0, k=0, l=0, m=0, n=0;
        int o=0, p=0, q=0, r=0, s=0, t=0, u=0, v=0, w=0, x=0, y=0, z=0;
        for(i1=0; sa[i1]!='\0'; i1++)
        {
            if(sa[i1]=='a')
                a = 1;
            else if(sa[i1]=='b')
                b= 1;
            else if(sa[i1]=='c')
                c= 1;
            else if(sa[i1]=='d')
                d= 1;
            else if(sa[i1]=='e')
                e= 1;
            else if(sa[i1]=='f')
                f= 1;
            else if(sa[i1]=='g')
                g= 1;
            else if(sa[i1]=='h')
                h= 1;
            else if(sa[i1]=='i')
                i= 1;
            else if(sa[i1]=='j')
                j= 1;
            else if(sa[i1]=='k')
                k= 1;
            else if(sa[i1]=='l')
                l= 1;
            else if(sa[i1]=='m')
                m= 1;
            else if(sa[i1]=='n')
                n= 1;
            else if(sa[i1]=='o')
                o= 1;
            else if(sa[i1]=='p')
                p= 1;
            else if(sa[i1]=='q')
                q= 1;
            else if(sa[i1]=='r')
                r= 1;
            else if(sa[i1]=='s')
                s= 1;
            else if(sa[i1]=='t')
                t= 1;
            else if(sa[i1]=='u')
                u= 1;
            else if(sa[i1]=='v')
                v= 1;
            else if(sa[i1]=='w')
                w= 1;
            else if(sa[i1]=='x')
                x= 1;
            else if(sa[i1]=='y')
                y= 1;
            else if(sa[i1]=='z')
                z= 1;
        }
        int sum = a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z;
        if(sum%2==0)
            cout<<"CHAT WITH HER!"<<endl;
        else
            cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}

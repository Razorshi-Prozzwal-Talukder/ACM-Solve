#include<bits/stdc++.h>
using namespace std;
main()
{
    char str[500];
    int nm;
    while(cin>>nm)
    {
        getchar();
        cin>>str;
        int i, a1=0, b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,i1=0,j1=0,k1=0,l1=0,m1=0,n1=0;
        int o1=0,p1=0,q1=0,r1=0,s1=0,t1=0,u1=0,v1=0,w1=0,x1=0,y1=0,z1=0;
        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i]=='a'||str[i]=='A')a1++;
            if(str[i]=='b'||str[i]=='B')b1++;
            if(str[i]=='c'||str[i]=='C')c1++;
            if(str[i]=='d'||str[i]=='D')d1++;
            if(str[i]=='e'||str[i]=='E')e1++;
            if(str[i]=='f'||str[i]=='F')f1++;
            if(str[i]=='g'||str[i]=='G')g1++;
            if(str[i]=='h'||str[i]=='H')h1++;
            if(str[i]=='i'||str[i]=='I')i1++;
            if(str[i]=='j'||str[i]=='J')j1++;
            if(str[i]=='k'||str[i]=='K')k1++;
            if(str[i]=='l'||str[i]=='L')l1++;
            if(str[i]=='m'||str[i]=='M')m1++;
            if(str[i]=='n'||str[i]=='N')n1++;
            if(str[i]=='o'||str[i]=='O')o1++;
            if(str[i]=='p'||str[i]=='P')p1++;
            if(str[i]=='q'||str[i]=='Q')q1++;
            if(str[i]=='r'||str[i]=='R')r1++;
            if(str[i]=='s'||str[i]=='S')s1++;
            if(str[i]=='t'||str[i]=='T')t1++;
            if(str[i]=='u'||str[i]=='U')u1++;
            if(str[i]=='v'||str[i]=='V')v1++;
            if(str[i]=='w'||str[i]=='W')w1++;
            if(str[i]=='x'||str[i]=='X')x1++;
            if(str[i]=='y'||str[i]=='Y')y1++;
            if(str[i]=='z'||str[i]=='Z')z1++;
        }
        if(a1>0&&b1>0&&c1>0&&d1>0&&e1>0&&f1>0&&g1>0&&h1>0&&i1>0&&j1>0&&k1>0&&l1>0&&m1>0&&n1>0&&
           o1>0&&p1>0&&q1>0&&r1>0&&s1>0&&t1>0&&u1>0&&v1>0&&w1>0&&x1>0&&y1>0&&z1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    char s1[100], s2[100];
    int sum1=0, sum2=0, sum3=0,i, sum4=0, j, a, b, c, d, n1, n2;
    float ans,e,f;
    while(gets(s1))
    {
        gets(s2);
        for(i=0; s1[i]!='\0'; i++)
        {
            if(s1[i]=='A'||s1[i]=='a')sum1+=1;
            else if(s1[i]=='B'||s1[i]=='b')sum1+=2;
            else if(s1[i]=='C'||s1[i]=='c')sum1+=3;
            else if(s1[i]=='D'||s1[i]=='d')sum1+=4;
            else if(s1[i]=='E'||s1[i]=='e')sum1+=5;
            else if(s1[i]=='F'||s1[i]=='f')sum1+=6;
            else if(s1[i]=='G'||s1[i]=='g')sum1+=7;
            else if(s1[i]=='H'||s1[i]=='h')sum1+=8;
            else if(s1[i]=='I'||s1[i]=='i')sum1+=9;
            else if(s1[i]=='J'||s1[i]=='j')sum1+=10;
            else if(s1[i]=='K'||s1[i]=='k')sum1+=11;
            else if(s1[i]=='L'||s1[i]=='l')sum1+=12;
            else if(s1[i]=='M'||s1[i]=='m')sum1+=13;
            else if(s1[i]=='N'||s1[i]=='n')sum1+=14;
            else if(s1[i]=='O'||s1[i]=='o')sum1+=15;
            else if(s1[i]=='P'||s1[i]=='p')sum1+=16;
            else if(s1[i]=='Q'||s1[i]=='q')sum1+=17;
            else if(s1[i]=='R'||s1[i]=='r')sum1+=18;
            else if(s1[i]=='S'||s1[i]=='s')sum1+=19;
            else if(s1[i]=='T'||s1[i]=='t')sum1+=20;
            else if(s1[i]=='U'||s1[i]=='u')sum1+=21;
            else if(s1[i]=='V'||s1[i]=='v')sum1+=22;
            else if(s1[i]=='W'||s1[i]=='w')sum1+=23;
            else if(s1[i]=='X'||s1[i]=='x')sum1+=24;
            else if(s1[i]=='Y'||s1[i]=='y')sum1+=25;
            else if(s1[i]=='Z'||s1[i]=='z')sum1+=26;
        }

        for(i=0; s2[i]!='\0'; i++)
        {
            if(s2[i]=='A'||s2[i]=='a')sum2+=1;
            else if(s2[i]=='B'||s2[i]=='b')sum2+=2;
            else if(s2[i]=='C'||s2[i]=='c')sum2+=3;
            else if(s2[i]=='D'||s2[i]=='d')sum2+=4;
            else if(s2[i]=='E'||s2[i]=='e')sum2+=5;
            else if(s2[i]=='F'||s2[i]=='f')sum2+=6;
            else if(s2[i]=='G'||s2[i]=='g')sum2+=7;
            else if(s2[i]=='H'||s2[i]=='h')sum2+=8;
            else if(s2[i]=='I'||s2[i]=='i')sum2+=9;
            else if(s2[i]=='J'||s2[i]=='j')sum2+=10;
            else if(s2[i]=='K'||s2[i]=='k')sum2+=11;
            else if(s2[i]=='L'||s2[i]=='l')sum2+=12;
            else if(s2[i]=='M'||s2[i]=='m')sum2+=13;
            else if(s2[i]=='N'||s2[i]=='n')sum2+=14;
            else if(s2[i]=='O'||s2[i]=='o')sum2+=15;
            else if(s2[i]=='P'||s2[i]=='p')sum2+=16;
            else if(s2[i]=='Q'||s2[i]=='q')sum2+=17;
            else if(s2[i]=='R'||s2[i]=='r')sum2+=18;
            else if(s2[i]=='S'||s2[i]=='s')sum2+=19;
            else if(s2[i]=='T'||s2[i]=='t')sum2+=20;
            else if(s2[i]=='U'||s2[i]=='u')sum2+=21;
            else if(s2[i]=='V'||s2[i]=='v')sum2+=22;
            else if(s2[i]=='W'||s2[i]=='w')sum2+=23;
            else if(s2[i]=='X'||s2[i]=='x')sum2+=24;
            else if(s2[i]=='Y'||s2[i]=='y')sum2+=25;
            else if(s2[i]=='Z'||s2[i]=='z')sum2+=26;
        }
       // cout<<sum1<<endl;
        n1=sum1;
        while(n1>=9)
        {
            do
            {
                a=n1%10;
                sum3+=a;
                n1/=10;
            }
            while(n1>0);
            b=sum3;
            n1=b;
            if(n1%10==b)break;
            sum3=0;
        }
       // cout<<b<<endl;
       // cout<<sum2<<endl;
        n2=sum2;
        while(n2>=9)
        {
            do
            {
                c=n2%10;
                sum4+=c;
                n2/=10;
            }
            while(n2>0);
            d=sum4;
            n2=d;
            if(n2%10==d)break;
            sum4=0;
        }
        //cout<<d<<endl;
        /*e= static_cast<float>(b);
        f=static_cast<float>(d);
          cout<<e<<endl<<f<<endl;*/
        if(b>=d)
        {
            ans = float(d)*100.00/float(b);
            printf("%0.2f %c\n",ans,37);
            sum1=0,sum2=0,sum3=0,i,sum4=0;
        }
        else
        {
            ans = float(b)*100.00/float(d);
            printf("%0.2f %c\n",ans,37);
            sum1=0,sum2=0,sum3=0,i,sum4=0;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
char sd[1000], as[1000];
main()
{
    int n;
    while(cin>>n)
    {
        if(n>0)cout<<n<<endl;
        else if(n>=-10 && n<=0)cout<<0<<endl;
        else if(n<-10)
        {
            n = abs(n);
            int i=0, j=0, a, x, y, z;
            while(n!=0)
            {
                a = n%10;
                sd[i]=a+'0';
                i++;
                n=n/10;
            }
            sd[i] = '\0';
            as[j]='-';
            for(i=strlen(sd)-1, j=1; i>=0; i--, j++)
                as[j] = sd[i];
            as[j]='\0';
            x = as[strlen(as)-1]-'0';
            y = as[strlen(as)-2]-'0';
            z = min(x, y);
            if(strlen(as)==3 && z==0)cout<<"0"<<endl;
            else
            {
                for(j=0; j<=strlen(as)-3; j++)cout<<as[j];
                as[j]=z+'0';
                cout<<as[j]<<endl;;
            }
        }
    }
    return 0;
}

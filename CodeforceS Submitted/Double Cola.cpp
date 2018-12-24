#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int num;
    char k;
    while(cin>>num)
    {
        long long int a=1,b=1,c=1,d=1,e=1;
        while(num!=0)
        {
            num=num-a;
            k = 'a';
            if(num<=0)
                break;

            num = num-b;
            k = 'b';
            if(num<=0)
                break;

            num = num-c;
            k = 'c';
            if(num<=0)
                break;

            num = num-d;
            k = 'd';
            if(num<=0)
                break;

            num = num-e;
            k = 'e';
            if(num<=0)
                break;

            a*=2;
            b*=2;
            c*=2;
            d*=2;
            e*=2;
        }
        if(k=='a')
            cout<<"Sheldon"<<endl;
        else if(k=='b')
            cout<<"Leonard"<<endl;
        else if(k=='c')
            cout<<"Penny"<<endl;
        else if(k=='d')
            cout<<"Rajesh"<<endl;
        else if(k=='e')
            cout<<"Howard"<<endl;
    }
    return 0;
}

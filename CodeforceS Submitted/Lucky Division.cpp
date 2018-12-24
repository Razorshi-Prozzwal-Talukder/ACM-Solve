#include<bits/stdc++.h>
using namespace std;
main()
{
    int number,i;
    int a[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    while(cin>>number)
    {
        if(number==4||number==7||number==44||number==47 ||number==74 ||number==77)
            cout<<"YES"<<endl;
        else if(number==444|| number==447|| number==474|| number==477 ||number==744)
            cout<<"YES"<<endl;
        else if(number==747|| number==774 ||number==777)
            cout<<"YES"<<endl;
            else if((number%4==0)||(number%7==0)||(number%44==0)||(number%47==0) ||(number%74==0) ||(number%77==0))
               cout<<"YES"<<endl;
            else if((number%444==0)|| (number%447==0)|| (number%474==0)|| (number%477==0) ||(number%744==0))
                cout<<"YES"<<endl;
            else if((number%747==0)|| (number%774==0) ||(number%777==0))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    int number;
    while(cin>>number)
    {
        int i, enter, out, sum=0, stable=0;
        for(i=1; i<=number; i++)
        {
            scanf("%d %d",&out, &enter);
            sum = sum - out;
            sum = sum + enter;
            if(stable<=sum)
                stable = sum;
        }
        cout<<stable<<endl;
    }
    return 0;
}
